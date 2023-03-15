/*
 ============================================================================
 Name        : 4_ex7.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Program for finding string length without strlen()

#include <stdio.h>

int main(void) {
	while(1)
	{
	char name[50];
	int i,strlen=0;
	printf("Enter a string to find its length: ");
	fflush(stdin); fflush(stdout);
	gets(name);
	for (i=0;name[i]!='\0';i++)
	{
		strlen++;
	}
	printf("The string length is: %d \n",strlen);
	}
	return 0;
}
