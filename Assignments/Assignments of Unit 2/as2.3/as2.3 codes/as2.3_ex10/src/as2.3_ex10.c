/*
 ============================================================================
 Name        : 3_ex10.c
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
	float num1 , num2, num3;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &num1, &num2, &num3 );
	if (num1 >= num2 && num1 >= num3)
		printf("The largest number is: %f \n", num1);
	else if (num2 >= num1 && num2 >= num3)
			printf("The largest number is: %f \n", num2);
	else if (num3 >= num2 && num3 >= num1)
			printf("The largest number is: %f \n", num3);
}
return 0;
}
