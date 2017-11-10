#include "List.h"

void easy_0() {
	FILE *f = fopen("test_easy_0.txt", "w");
	if (f == NULL) {
	    printf("Error opening file test_easy_0!\n");
	    return;
	}

	List **ghisee = NULL;

	deschide_ghisee(&ghisee, 4);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 3));
	
	inchide_ghisee(&ghisee);

	fclose(f);
}

void easy_1() {
	FILE *f = fopen("test_easy_1.txt", "w");
	if (f == NULL) {
	    printf("Error opening file test_easy_1!\n");
	    return;
	}

	List **ghisee = NULL;

	deschide_ghisee(&ghisee, 2);

	adauga_persoana(&ghisee, "Andrei", 4, 0);
	adauga_persoana(&ghisee, "Ana", 6, 0);
	adauga_persoana(&ghisee, "Alina", 7, 1);
	adauga_persoana(&ghisee, "Alin", 10, 1);
	adauga_persoana(&ghisee, "Alex", 5, 1);
	
	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 0));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);

	sterge_primii_oameni(&ghisee);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 0));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);

	inchide_ghisee(&ghisee);

	fclose(f);
}

void easy_2() {
	FILE *f = fopen("test_easy_2.txt", "w");
	if (f == NULL) {
	    printf("Error opening file test_easy_2!\n");
	    return;
	}

	List **ghisee = NULL;

	deschide_ghisee(&ghisee, 2);

	adauga_persoana(&ghisee, "Andrei", 4, 0);
	adauga_persoana(&ghisee, "Ana", 6, 0);
	adauga_persoana(&ghisee, "Adi", 5, 0);
	adauga_persoana(&ghisee, "Alina", 7, 1);
	adauga_persoana(&ghisee, "Alin", 10, 1);
	adauga_persoana(&ghisee, "Alex", 5, 1);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 0));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);

	sterge_persoana(&ghisee, "Andrei", 4, 0);
	sterge_persoana(&ghisee, "Ana", 6, 0);
	sterge_persoana(&ghisee, "Alina", 7, 1);
	sterge_persoana(&ghisee, "Alin", 10, 1);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 0));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);

	sterge_persoana(&ghisee, "Alex", 5, 1);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);

	adauga_persoana(&ghisee, "Stefania", 10, 0);
	adauga_persoana(&ghisee, "David", 10, 1);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 0));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);

	sterge_primii_oameni(&ghisee);
	sterge_primii_oameni(&ghisee);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));

	inchide_ghisee(&ghisee);

	fclose(f);
}

void medium_1() {
	FILE *f = fopen("test_medium_1.txt", "w");
	if (f == NULL) {
	    printf("Error opening file test_medium_1!\n");
	    return;
	}

	List **ghisee = NULL;

	deschide_ghisee(&ghisee , 2);

	adauga_persoana(&ghisee, "Andrei", 4, 0);
	adauga_persoana(&ghisee, "Ana", 6, 0);
	adauga_persoana(&ghisee, "Alina", 7, 1);
	adauga_persoana(&ghisee, "Alin", 10, 1);
	adauga_persoana(&ghisee, "Alex", 5, 1);
	
	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));

	deschide_ghisee(&ghisee, 4);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	afiseaza_rand_ghiseu(f, ghisee, 2);
	afiseaza_rand_ghiseu(f, ghisee, 3);
	
	sterge_persoana(&ghisee, "Andrei", 4, 0);
	sterge_persoana(&ghisee, "Ana", 6, 0);
	sterge_persoana(&ghisee, "Alina", 7, 1);
	sterge_persoana(&ghisee, "Alin", 10, 1);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	afiseaza_rand_ghiseu(f, ghisee, 2);
	afiseaza_rand_ghiseu(f, ghisee, 3);
	
	sterge_primii_oameni(&ghisee);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));

	inchide_ghisee(&ghisee);
	
	fclose(f);
}

void medium_2() {
	FILE *f = fopen("test_medium_2.txt", "w");
	if (f == NULL) {
	    printf("Error opening file test_medium_2!\n");
	    return;
	}

	List **ghisee = NULL;
	
	deschide_ghisee(&ghisee , 4);

	adauga_persoana(&ghisee, "Andrei", 4, 0);
	adauga_persoana(&ghisee, "Ana", 6, 0);
	adauga_persoana(&ghisee, "Alina", 7, 1);
	adauga_persoana(&ghisee, "Alin", 9, 1);
	adauga_persoana(&ghisee, "Alex", 5, 1);
	adauga_persoana(&ghisee, "Andreea", 8, 2);
	adauga_persoana(&ghisee, "Adriana", 10, 2);
	adauga_persoana(&ghisee, "Suzana", 11, 3);
	
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "Andrei", 4, 0));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "Alin", 9, 1));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "Andreea", 8, 2));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "Alex", 5, 1));

	fprintf(f, "%s\n", gaseste_persoana_din_fata(ghisee, "Andrei", 4, 0));
	fprintf(f, "%s\n", gaseste_persoana_din_fata(ghisee, "Alin", 9, 1));
	fprintf(f, "%s\n", gaseste_persoana_din_fata(ghisee, "Andreea", 8, 2));
	fprintf(f, "%s\n", gaseste_persoana_din_fata(ghisee, "Alex", 5, 1));
	
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	afiseaza_rand_ghiseu(f, ghisee, 2);
	afiseaza_rand_ghiseu(f, ghisee, 3);

	deschide_ghisee(&ghisee, 2);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	
	sterge_persoana(&ghisee, "Andrei", 4, 0);
	sterge_persoana(&ghisee, "Ana", 6, 0);
	sterge_persoana(&ghisee, "Alina", 7, 1);
	sterge_persoana(&ghisee, "Alin", 9, 1);
	
	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));

	sterge_persoana(&ghisee, "Andrei", 4, 1);
	sterge_persoana(&ghisee, "Ana", 6, 1);
	sterge_persoana(&ghisee, "Alina", 7, 0);
	sterge_persoana(&ghisee, "Alin", 9, 0);
	
	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	
	sterge_primii_oameni(&ghisee);

	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);

	sterge_primii_oameni(&ghisee);

	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);

	sterge_primii_oameni(&ghisee);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));

	inchide_ghisee(&ghisee);

	fclose(f);
}

void test_complex_1() {
	FILE *f = fopen("test_complex_1.txt", "w");
	if (f == NULL) {
	    printf("Error opening file test_complex_1!\n");
	    return;
	}

	List **ghisee = NULL;
	
	deschide_ghisee(&ghisee , 4);

	adauga_persoana(&ghisee, "Andrei", 4, 0);
	adauga_persoana(&ghisee, "Ana", 6, 0);
	adauga_persoana(&ghisee, "Alina", 7, 1);
	adauga_persoana(&ghisee, "David", 10, 1);
	adauga_persoana(&ghisee, "Alex", 2, 1);
	adauga_persoana(&ghisee, "Bogdan", 5, 1);
	adauga_persoana(&ghisee, "Gabi", 3, 1);
	adauga_persoana(&ghisee, "Alin", 10, 2);
	adauga_persoana(&ghisee, "Stefania", 8, 2);
	adauga_persoana(&ghisee, "Darius", 1, 2);
	adauga_persoana(&ghisee, "Mihai", 3, 2);
	adauga_persoana(&ghisee, "Dana", 11, 3);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 0));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 2));
	afiseaza_rand_ghiseu(f, ghisee, 2);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 3));
	afiseaza_rand_ghiseu(f, ghisee, 3);
	
	deschide_ghisee(&ghisee, 5);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 0));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 2));
	afiseaza_rand_ghiseu(f, ghisee, 2);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 3));
	afiseaza_rand_ghiseu(f, ghisee, 3);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 4));
	afiseaza_rand_ghiseu(f, ghisee, 4);
	
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "David", 9, 2));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "David", 4, 2));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "David", 10, 2));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "Darius", 1, 1));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "Darius", 1, 10));
	
	sterge_primii_oameni(&ghisee);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	
	sterge_persoana(&ghisee, "Andrei", 4, 2);
	sterge_persoana(&ghisee, "Andrei", 4, 2);
	sterge_persoana(&ghisee, "Ana", 0, 0);
	sterge_persoana(&ghisee, "Ana", 6, 0);
	sterge_persoana(&ghisee, "Ana", 2, 0);
	sterge_persoana(&ghisee, "Alex", 3, 0);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 0));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 1));
	afiseaza_rand_ghiseu(f, ghisee, 1);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 2));
	afiseaza_rand_ghiseu(f, ghisee, 2);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 3));
	afiseaza_rand_ghiseu(f, ghisee, 3);
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee, 4));
	afiseaza_rand_ghiseu(f, ghisee, 4);
	
	inchide_ghisee(&ghisee);

	fclose(f);
}

void test_complex_2() {
	FILE *f = fopen("test_complex_2.txt", "w");
	if (f == NULL) {
	    printf("Error opening file test_complex_2!\n");
	    return;
	}

	List **ghisee = NULL;

	deschide_ghisee(&ghisee , 4);
	
	adauga_persoana(&ghisee, "a", 1, 0);
	adauga_persoana(&ghisee, "a", 2, 1);
	adauga_persoana(&ghisee, "a", 3, 2);
	adauga_persoana(&ghisee, "a", 4, 3);
	adauga_persoana(&ghisee, "b", 4, 3);
	adauga_persoana(&ghisee, "b", 6, 1);
	adauga_persoana(&ghisee, "b", 7, 2);
	adauga_persoana(&ghisee, "b", 8, 3);
	adauga_persoana(&ghisee, "b", 9, 0);
	adauga_persoana(&ghisee, "b", 10, 1);
	adauga_persoana(&ghisee, "c", 10, 2);
	adauga_persoana(&ghisee, "c", 11, 3);
	adauga_persoana(&ghisee, "c", 12, 0);
	adauga_persoana(&ghisee, "a", 13, 1);
	adauga_persoana(&ghisee, "b", 13, 2);
	adauga_persoana(&ghisee, "c", 13, 3);
	adauga_persoana(&ghisee, "d", 13, 0);
	adauga_persoana(&ghisee, "d", 13, 1);
	adauga_persoana(&ghisee, "d", 14, 2);
	adauga_persoana(&ghisee, "d", 15, 3);
	adauga_persoana(&ghisee, "d", 16, 0);
	adauga_persoana(&ghisee, "d", 17, 1);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	afiseaza_rand_ghiseu(f, ghisee, 2);
	afiseaza_rand_ghiseu(f, ghisee, 3);
	
	deschide_ghisee(&ghisee, 7);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));	
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	afiseaza_rand_ghiseu(f, ghisee, 2);
	afiseaza_rand_ghiseu(f, ghisee, 3);
	afiseaza_rand_ghiseu(f, ghisee, 4);
	afiseaza_rand_ghiseu(f, ghisee, 5);
	afiseaza_rand_ghiseu(f, ghisee, 6);
	afiseaza_rand_ghiseu(f, ghisee, 7);

	deschide_ghisee(&ghisee, 4);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	afiseaza_rand_ghiseu(f, ghisee, 2);
	afiseaza_rand_ghiseu(f, ghisee, 3);
	afiseaza_rand_ghiseu(f, ghisee, 4);
	afiseaza_rand_ghiseu(f, ghisee, 5);
	afiseaza_rand_ghiseu(f, ghisee, 6);
	afiseaza_rand_ghiseu(f, ghisee, 7);

	sterge_primii_oameni(&ghisee);
	sterge_persoana(&ghisee, "a", 2, 0);
	sterge_persoana(&ghisee, "b", 3, 0);
	sterge_persoana(&ghisee, "c", 4, 0);
	sterge_persoana(&ghisee, "d", 5, 0);
	sterge_persoana(&ghisee, "a", 1, 1);
	sterge_persoana(&ghisee, "b", 1, 1);
	sterge_persoana(&ghisee, "c", 1, 1);
	sterge_persoana(&ghisee, "d", 1, 1);
	sterge_persoana(&ghisee, "d", 1, 4);
	
	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
	afiseaza_rand_ghiseu(f, ghisee, 0);
	afiseaza_rand_ghiseu(f, ghisee, 1);
	afiseaza_rand_ghiseu(f, ghisee, 2);
	afiseaza_rand_ghiseu(f, ghisee, 3);
	afiseaza_rand_ghiseu(f, ghisee, 4);
	afiseaza_rand_ghiseu(f, ghisee, 5);
	afiseaza_rand_ghiseu(f, ghisee, 6);
	afiseaza_rand_ghiseu(f, ghisee, 7);
	
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee,0));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee,1));
	fprintf(f, "%d\n", calculeaza_numar_oameni_ghiseu(ghisee,3));

	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "d", 13, 0));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "d", 13, 1));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "d", 13, 3));
	fprintf(f, "%d\n", gaseste_pozitie_persoana(ghisee, "d", 13, 2));

	fprintf(f, "%s\n", gaseste_persoana_din_fata(ghisee, "d", 13, 0));
	fprintf(f, "%s\n", gaseste_persoana_din_fata(ghisee, "d", 13, 1));
	fprintf(f, "%s\n", gaseste_persoana_din_fata(ghisee, "d", 13, 3));
	fprintf(f, "%s\n", gaseste_persoana_din_fata(ghisee, "b", 4, 2));
	
	sterge_primii_oameni(&ghisee);
	sterge_primii_oameni(&ghisee);
	sterge_primii_oameni(&ghisee);
	sterge_primii_oameni(&ghisee);
	sterge_primii_oameni(&ghisee);

	fprintf(f, "%d\n", calculeaza_numar_total_oameni(ghisee));
		
	inchide_ghisee(&ghisee);

	fclose(f);
}

int main() {
	easy_0();
	easy_1();
	easy_2();
	medium_1();
	medium_2();
	test_complex_1();
	test_complex_2();
	
	return 0;			
}
