/*
 ============================================================================
 Name        : 4_lab1.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {
	while(1)
	{
	float degrees[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter student %d degree: \n", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degrees[i]);
	}
	for(i=0;i<10;i++)
		{
			printf("Student %d degree is: %2.2f \n", i+1, degrees[i]);
		}
	}
	return 0;
}
