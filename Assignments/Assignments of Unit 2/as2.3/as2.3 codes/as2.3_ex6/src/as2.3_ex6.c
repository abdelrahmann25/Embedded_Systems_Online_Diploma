/*
 ============================================================================
 Name        : 3_ex6.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	fflush(stdin); fflush(stdout);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	fflush(stdin); fflush(stdout);
	printf("value of a after swapping is: %d \n",b);
	printf("value of b after swapping is: %d",a);


	return 0;
}
