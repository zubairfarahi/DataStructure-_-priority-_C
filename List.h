#ifndef SORTED_LIST_H
#define SORTED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

static int countGhisee = 0;

typedef struct ListNode {
    struct ListNode *urmator;
    struct ListNode *anterior;
    int prioritate;
    char *nume;
} ListNode;

typedef struct List {
    ListNode *primul;
    ListNode *ultimul;
} List;

void deschide_ghisee(List ***ghisee, int N) {
	int i = 0;
	if(*ghisee == NULL)
	{
		countGhisee = N;
		(*ghisee) =(List**)malloc(N * sizeof(List*));
		if(ghisee == NULL)
        {
            printf("Error ! Memory not allocated");
            exit(0);
        }
		for(i = 0 ; i < N ; i++)
		{
			(*ghisee)[i] = malloc(sizeof(ListNode));
			(*ghisee)[i]->primul = NULL;
			(*ghisee)[i]->ultimul = NULL;
		}
	}
	else
	{
        int i;
        for(i = 1; i < countGhisee ; i++ )
        {
        	ListNode *curr = (*ghisee)[0]->primul;
			ListNode *currCpy = curr;
			ListNode *otherListFirst = (*ghisee)[i]->primul;
			ListNode *otherListLast = (*ghisee)[i]->ultimul;
			while(curr->urmator != NULL)
			{
				currCpy = curr;
				curr = curr->urmator;
			}
			curr->urmator = malloc(sizeof(ListNode));
			curr->urmator->prioritate = otherListFirst->prioritate;
			curr->urmator->nume = malloc(sizeof(otherListFirst->nume));
			strcpy(curr->urmator->nume,otherListFirst->nume);
			curr->urmator->urmator = otherListFirst->urmator;
			curr->urmator->anterior = curr;
			(*ghisee)[0]->ultimul = otherListLast;
			
			(*ghisee)[i]->primul = NULL;
			(*ghisee)[i]->ultimul = NULL;
			curr = (*ghisee)[1]->primul;
			
			//check if is right
			while(curr != NULL)
			{
				curr = curr->urmator;
			}
		}
		
		
		(*ghisee) = realloc((*ghisee),N * sizeof(List*));
		for(i = countGhisee ; i < N ; i++)
		{
			(*ghisee)[i] = malloc(sizeof(ListNode));
			(*ghisee)[i]->primul = NULL;
			(*ghisee)[i]->ultimul = NULL;
		}
		countGhisee = N;
		
		ListNode *curr = (*ghisee)[0]->primul;
		char *copy = malloc(30*sizeof(char));
		int cpyint;
		ListNode *next;
		while(curr != NULL)
		{
			next = curr->urmator;
			while(next != NULL)
			{
				if(curr->prioritate < next->prioritate)
				{					
					strcpy(copy,curr->nume);
					cpyint = curr->prioritate;
					curr->prioritate = next->prioritate;
					strcpy(curr->nume,next->nume);
					strcpy(next->nume,copy);
					next->prioritate = cpyint;		
				}
				else if(curr->prioritate == next->prioritate)
				{
					if(strcmp(curr->nume,next->nume) > 0)
					{
						strcpy(copy,curr->nume);
						cpyint = curr->prioritate;
						curr->prioritate = next->prioritate;
						strcpy(curr->nume,next->nume);
						strcpy(next->nume,copy);
						next->prioritate = cpyint;
					}
					else
					{
						next = next->urmator;
					}
				}
				else
				{
					next = next->urmator;
				}
			}
			curr = curr->urmator;
		}
		free(copy);
		
		//check how many nodes are
		curr = (*ghisee)[0]->primul;
		int sizeNode = 0;
		while(curr != NULL)
		{
			sizeNode++;
			curr = curr->urmator;
		}
		
		int j;
		i = 1;
		curr = (*ghisee)[0]->primul;
		next = 	curr->urmator;		//(*ghisee)[0]->primul->urmator;
		while(i < sizeNode)
		{
			for(j = 1 ; j < countGhisee; j++)
			{
				if((*ghisee)[j]->primul == NULL)
				{
					(*ghisee)[j]->primul = next;
					curr->urmator = next->urmator;
					
					if(next->urmator != NULL)
					{
						next->urmator->anterior = next->anterior;	
						next = next->urmator;
					}
					(*ghisee)[j]->primul->anterior = NULL;
					(*ghisee)[j]->primul->urmator = NULL;
					i++;
					if( i == sizeNode)
					{
						break;
					}
				}
				else if( (i%countGhisee) == 0)
				{
					if(next->urmator != NULL)
					{
						next = next->urmator;
						curr = curr->urmator;
						
					}
					j = j -1;
					i++;
					if( i == sizeNode)
					{
						break;
					}
				}
				else
				{
					ListNode *currentLoop = (*ghisee)[j]->primul;
					ListNode *currCpyLoop = currentLoop;
					while(currentLoop->urmator != NULL)
					{
						currCpyLoop = currentLoop;
						currentLoop = currentLoop->urmator;
					}
					currentLoop->urmator = malloc(sizeof(ListNode));
					currentLoop->urmator->prioritate = next->prioritate;
					currentLoop->urmator->nume = malloc(sizeof(next->nume));
					strcpy(currentLoop->urmator->nume,next->nume);
					currentLoop->urmator->urmator = NULL;
					currentLoop->urmator->anterior = currCpyLoop;
					(*ghisee)[j]->ultimul = currentLoop->urmator;
					
					
					curr->urmator = next->urmator;
					if(next->urmator != NULL)
					{
						next->urmator->anterior = next->anterior;
						next = next->urmator;	
					}
					i++;
					if( i == sizeNode)
					{
						break;
					}

				}
			}			
		}
		
	}

}

void inchide_ghisee(List ***ghisee) {
	free(**ghisee);
}

void adauga_persoana(List ***ghisee, char *nume, int prioritate,int numar_ghiseu)
{
	if(numar_ghiseu < countGhisee)
	{
		if((*ghisee)[numar_ghiseu]->primul == NULL)
		{
			(*ghisee)[numar_ghiseu]->primul = malloc(sizeof(ListNode));
			(*ghisee)[numar_ghiseu]->ultimul = malloc(sizeof(ListNode));
			(*ghisee)[numar_ghiseu]->primul->prioritate = prioritate;
			(*ghisee)[numar_ghiseu]->primul->nume = malloc(sizeof(nume));
			strcpy((*ghisee)[numar_ghiseu]->primul->nume,nume);
			(*ghisee)[numar_ghiseu]->primul->urmator = NULL;
			(*ghisee)[numar_ghiseu]->primul->anterior = NULL;
		}
		else
		{
			ListNode *curr = (*ghisee)[numar_ghiseu]->primul;
			ListNode *currCpy = curr;
			while(curr->urmator != NULL)
			{
				currCpy = curr;
				curr = curr->urmator;
			}
			curr->urmator = malloc(sizeof(ListNode));
			curr->urmator->prioritate = prioritate;
			curr->urmator->nume = malloc(sizeof(nume));
			strcpy(curr->urmator->nume,nume);
			curr->urmator->urmator = NULL;
			curr->urmator->anterior = curr;
			(*ghisee)[numar_ghiseu]->ultimul = curr->urmator;
		}
	
		ListNode *curr = (*ghisee)[numar_ghiseu]->primul;
		char *copy = malloc(30 *sizeof(char));
		int cpyint;
		ListNode *next;
		while(curr != NULL)
		{
			next = curr->urmator;
			while(next != NULL)
			{
				if(curr->prioritate < next->prioritate)
				{					
					strcpy(copy,curr->nume);
					cpyint = curr->prioritate;
					curr->prioritate = next->prioritate;
					strcpy(curr->nume,next->nume);
					strcpy(next->nume,copy);
					next->prioritate = cpyint;		
				}
				else if(curr->prioritate == next->prioritate)
				{
				if(strcmp(curr->nume,next->nume) > 0)
					{
						strcpy(copy,curr->nume);
						cpyint = curr->prioritate;
						curr->prioritate = next->prioritate;
						strcpy(curr->nume,next->nume);
						strcpy(next->nume,copy);
						next->prioritate = cpyint;
					}
					else
					{
						next = next->urmator;
					}
				}
				else
				{
					next = next->urmator;
				}
			}
			curr = curr->urmator;
		}
		free(copy);		
	}
	else
		return;
}

void sterge_persoana(List ***ghisee, char *nume, int prioritate	,int numar_ghiseu)
 {
 	if(numar_ghiseu < countGhisee)
 	{
	 	ListNode *curr = (*ghisee)[numar_ghiseu]->primul;
		ListNode *prev = NULL ;
		if(curr != NULL)
		{
			do
			{
				if(curr->prioritate == prioritate)
				{
					if( strcmp(curr->nume,nume) == 0)
					{
						if(curr->anterior != NULL && curr->urmator != NULL)
						{
							prev->urmator = curr->urmator;
							curr->urmator->anterior = prev;
							curr = NULL;
						}
						else if(prev == NULL && curr->urmator != NULL)
						{
							curr->prioritate = curr->urmator->prioritate;
							strcpy(curr->nume,curr->urmator->nume);
							curr->urmator = NULL;
							curr = NULL;
						}
						else if(prev != NULL && curr->urmator == NULL)
						{
							prev->urmator = curr->urmator;
							curr = NULL;
						}
						else
						{
							(*ghisee)[numar_ghiseu]->primul = NULL;
							curr = NULL;
						}
					}
					else
					{
						curr = curr->urmator;
						if(prev == NULL)
							prev = (*ghisee)[numar_ghiseu]->primul;
						else
							prev = prev->urmator;
					}
				}
				else
				{
					curr = curr->urmator;
					if(prev == NULL)
						prev = (*ghisee)[numar_ghiseu]->primul;
					else
						prev = prev->urmator;
				}	
			}while(curr != NULL);	
		}
				
	}
		
	
}

void sterge_primii_oameni(List ***ghisee)
{
	int i = 0;
	for(i = 0 ; i < countGhisee ; i++)
	{
		if( (*ghisee)[i]->primul != NULL )
		{		
			ListNode *next = (*ghisee)[i]->primul->urmator;
			if( next != NULL)
			{	
				(*ghisee)[i]->primul->prioritate = next->prioritate;
				strcpy( (*ghisee)[i]->primul->nume, next->nume );			
				(*ghisee)[i]->primul->urmator = next->urmator;
				if(next->urmator != NULL)
				{
					next->urmator->anterior = next->anterior;
				}
				free(next);
				
			}
			else
			{
				// check for realese memory
				(*ghisee)[i]->primul = NULL;			
			}		
		}
	}

}

int calculeaza_numar_oameni_ghiseu(List **ghisee, int numar_ghiseu)
{
	int count = 0 ;
	if( ghisee[numar_ghiseu]->primul != NULL )
	{
		ListNode *curr= ghisee[numar_ghiseu]->primul;
		do
		{
			count++;
			curr = curr->urmator;
		}while(curr != NULL);
		return count;
	}
	else
	{
		return count;
	}

	return -1;
}

int calculeaza_numar_total_oameni(List **ghisee) {
	int total = 0 ;
	int i= 0 ;
	int count;
	for(i = 0 ; i < countGhisee ; i++)
	{
		count = 0 ;
		ListNode *cur = ghisee[i]->primul;
		if(cur != NULL)
		{
			do
			{
				count++;
				cur = cur->urmator;
			}while(cur != NULL);
		}
		total = total + count;
	}
	return total;
}

int gaseste_pozitie_persoana (List **ghisee, char *nume, int prioritate,
		int numar_ghiseu) {
	int pozitie = 0;
	if(numar_ghiseu < countGhisee)
	{
		ListNode *curr = ghisee[numar_ghiseu]->primul;
		while(curr != NULL)
		{
			if(curr->prioritate == prioritate)
			{
				if( strcmp(curr->nume,nume) == 0)
				{
					return pozitie;
				}
				else
				{
					pozitie++;
					curr= curr->urmator;
				}
			}
			else
			{
				pozitie++;
				curr = curr->urmator;
			}
		}
		
		return -1;
	}	
	else
	{
		return -1;	
	}	
}

char* gaseste_persoana_din_fata(List **ghisee, char *nume, int prioritate,
		int numar_ghiseu) {
	if(numar_ghiseu < countGhisee)
	{
		ListNode *curr = ghisee[numar_ghiseu]->primul;
		ListNode *currCpy = curr;
		while(curr != NULL)
		{
			if(curr->prioritate == prioritate)
			{
				if( strcmp(curr->nume,nume) == 0)
				{
					if(curr->anterior != NULL)
					{
						return(currCpy->nume);
					}
					else
					{
						return "Nu exista.";
					}
				}
				else
				{
					currCpy = curr;
					curr= curr->urmator;
				}
			}
			else
			{
				currCpy = curr;
				curr = curr->urmator;
			}
		}
		return "Nu exista.";
	}
	else
	{
		return "Nu exista.";
	}

}

void afiseaza_rand_ghiseu(FILE *f, List **ghisee, int numar_ghiseu)
{
	if(numar_ghiseu < countGhisee)
	{
		ListNode *curr = ghisee[numar_ghiseu]->primul;
		if(curr == NULL)
		{
			fprintf(f,"Ghiseul %d nu are nicio persoana in asteptare.",numar_ghiseu);
		}
		while(curr != NULL)
		{
			fprintf(f,"%s-%d;",curr->nume,curr->prioritate);
			curr = curr->urmator;
		}
		fprintf(f,"\n");
	}
}

#endif


