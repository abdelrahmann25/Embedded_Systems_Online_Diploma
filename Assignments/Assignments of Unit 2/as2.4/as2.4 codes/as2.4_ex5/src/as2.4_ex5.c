/*
 ============================================================================
 Name        : 4_ex5.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Program for searching for element in array
#include <stdio.h>

int main(void) {
	int array[50];
	int i, size,searchfor;
	printf("Enter the size of array: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &size);

	while(size>=50 && size<0)
	{
		printf("Error: Enter a Valid size between 0<>50\n");
		fflush(stdin); fflush(stdout);
		scanf("%d", &size);
	}

	for (i=0;i<size;i++)
	{
		printf("Enter value %d of array: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &array[i]);
	}
	printf("The New Array is: \n");
		for (i=0;i<size;i++)
			{
				printf(" %d ", array[i]);
			}
	printf("\nEnter element to be searched for: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &searchfor);

	for (i=0;i<size;i++)
		{
			if (array[i]==searchfor)
			{
				printf("The element is in %d in the array",i+1);
			}
		}
	return 0;
}
