/*
 ============================================================================
 Name        : 3_ex4.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	float num1, num2, product ;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	product = num1 * num2;
	printf("Product is = %f",product);
	return 0;
}
