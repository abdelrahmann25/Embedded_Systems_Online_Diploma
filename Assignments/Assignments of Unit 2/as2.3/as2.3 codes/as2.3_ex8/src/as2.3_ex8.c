/*
 ============================================================================
 Name        : 3_ex8.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int num;
while(1)
{
	printf("Enter number you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num %2 == 0)
		printf("The number is even \n");
	else
		printf("The number is odd \n");
}
return 0;
}
