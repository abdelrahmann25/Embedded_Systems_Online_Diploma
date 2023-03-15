/*
 ============================================================================
 Name        : 5_lab3.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Program for finding name in a set of entered names.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char find_name(char array[][50],char name[50],int num_of_names)
{
int i,match = 0;

for (i = 0; i < num_of_names; i++)
{
	if (strcmp(array[i], name))
		continue;
	else
		match = 1;
}
return (match);
}
int main(void) {
	int size, i, match;
	char name[50];
	printf("Enter size of the array of names:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &size);
	char array[size][50];
	printf("Enter names:\n");
	fflush(stdin); fflush(stdout);
	for(i = 0; i < size; i++)
	{
		printf("Enter name#%d:", i+1);
		fflush(stdin); fflush(stdout);
		gets(array[i]);
	}
	printf("The Entered names are:\n");
	for(i = 0; i < size; i++)
		{
			printf("%s, ", array[i]);
		}
	printf("\nEnter the name you wish to find:");
	fflush(stdin); fflush(stdout);
	gets(name);
	fflush(stdin); fflush(stdout);
	match = find_name(array, name,size);
	if (match == 1)
	{
		printf("Name Found, Welcome\n");
	}
	else if (match == 0)
	{
		printf("Name not Found, Goodbye\n");
	}
	return EXIT_SUCCESS;
}
