CC = gcc
CFLAGS  = -Wall -g

ex1: ex1.c
	$(CC) $(CFLAGS) -o ex1 ex1.c

ex3:ex3.c
	$(CC) $(CFLAGS) -o ex3 ex3.c

ex5: ex5.c
	$(CC) $(CFLAGS) -o ex5 ex5.c

ex6: ex6.c
	$(CC) $(CFLAGS) -o ex6 ex6.c


clean:
	rm -rf *.dSYM & rm ex{1..6}
