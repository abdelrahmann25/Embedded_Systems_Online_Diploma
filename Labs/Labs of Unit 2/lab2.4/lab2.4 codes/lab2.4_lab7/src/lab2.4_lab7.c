/*
 ============================================================================
 Name        : 4_lab7.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char name[]={"Ahmed Osama"};
	char namelwr[12];
	int i;
	printf("%s\n", name);
	for( i=0 ; name[i]!='\0' ; i++)
	{
		if (name[i]>='A' && name[i]<='Z')
			{namelwr[i]=name[i]+32;}
		else namelwr[i]=name[i];
	}
	printf("%s\n", namelwr);
	return 0;
}
