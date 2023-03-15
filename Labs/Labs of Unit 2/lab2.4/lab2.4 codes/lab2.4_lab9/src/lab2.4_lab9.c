/*
 ============================================================================
 Name        : 4_lab9.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Program to compare entered string with another entered string list.
#include <stdio.h>
#include <string.h>

int main(void) {

	char str1[50];
	char str2[50];
	int i ,flag=0;

	printf("Enter string 1 :");
	fflush(stdin);
	fflush(stdout);
	gets(str1);

	printf("\nEnter string 2 :");
	fflush(stdin);
	fflush(stdout);
	gets(str2);

	printf("\n string 1 is: %s", str1);
	fflush(stdin);
	fflush(stdout);

	printf("\n string 2 is: %s\n", str2);
	fflush(stdin);
	fflush(stdout);

	for (i = 0; i < strlen(str1) && i < strlen(str2); i++) {
		if (str1[i] > str2[i])
		{
			printf("1");
			flag =1;
			break;
		}
		else if (str1[i] < str2[i])
		{
			printf("-1");
			flag=1;
			break;
		}
	if (flag == 0)
		printf("0");
		}
	return 0;
	}


