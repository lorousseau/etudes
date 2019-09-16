libmylib.a: annagramme.o palindrome.o
	ar -rs libmylib.a annagramme.o palindrome.o
annagramme.o: annagramme.c mylib.h
	gcc -c annagramme.c-Wall
palindrome.o: palindrome.c mylib.h
	gcc -c palindrome.c -Wall
