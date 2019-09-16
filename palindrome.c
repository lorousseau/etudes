#include<stdio.h>
#include<string.h>

#define n 10

typedef char string[10];

typedef string Tab[10];

int palindrome(string t){
	int j=strlen(t)-1;
	for(int i=0;i<strlen(t)/2;i++){
		printf("%s \n %s\n",t[i],t[j]);
		if(t[i]!=t[j]){
			return 0;
		}
		j--;
	}
	return 1;
}
