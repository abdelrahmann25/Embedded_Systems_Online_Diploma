/*
 ============================================================================
 Name        : 3_ex3.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int num1, num2, sum ;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1, &num2);
	sum = num1 + num2 ;
	fflush(stdin); fflush(stdout);
	printf("Sum is = %d", sum);
	return 0;
}
