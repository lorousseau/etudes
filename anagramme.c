#include<stdio.h>
#include<string.h>
#include<readline/readline.h>
#include<readline/history.h>
#include<stdlib.h>

#define n 10
#define true 1
#define false 0

typedef char string[10];

typedef string Tab[10];

int anagramme(string a,string b){
	int i, j ;
	int echec = false ;
	char *c ;
	printf("%d\n%d\n",strlen(a),strlen(b));
  // longueurs identiques ?
	if (strlen(a)!=strlen(b)) return false ;

  // on va travailler sur une copie que l'on pourra modifier
	c = strdup(b) ;

  // mêmes caractères avec mêmes occurences ?
	for (i=0 ; a[i]!='\0' && !echec ; i++)
	{
		for (j=0 ; c[j]!='\0' && a[i]!=c[j] ; j++) ;
      // cette boucle est vide, mais utile

		if (a[i]!=c[j])
		echec = true;   // s1[i] pas trouvé dans s2
		else
			c[j] = ' ' ;  // on grille le caractère utilisé
	}
	free(c); // nécessité par strdup, cf man

	return !echec ;
}
