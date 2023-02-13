/*
 ============================================================================
 Name        : 3_ex13.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	while(1)
	{
		unsigned int num = 0;
		unsigned int sum = 0;
	printf("Enter a normal number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num );
		while(!num==0)
		{
			sum = sum + num;
			num--;
		}
	printf("The sum of normal numbers = %d \n", sum);
	}
	return 0;
}
