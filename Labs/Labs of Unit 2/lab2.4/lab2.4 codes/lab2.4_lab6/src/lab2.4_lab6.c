/*
 ============================================================================
 Name        : 4_lab6.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char name[]={"Ahmed Osama"}, copy_of_name[20];
	int i;
	printf("%s\n", name);
	for( i=0 ; i<sizeof(name) ; i++)
	{
		copy_of_name[i]=name[i];
	}
	printf("%s", copy_of_name);
	return 0;
}
