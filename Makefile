build:
	gcc -std=c9x tema1.c -o tema1
clean:
	rm tema1 test_*
run:	
	./tema1
runValgrind:
	valgrind ./tema1
