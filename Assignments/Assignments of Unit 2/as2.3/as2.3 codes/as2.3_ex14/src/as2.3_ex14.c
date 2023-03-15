/*
 ============================================================================
 Name        : 3_ex14.c
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
		int num = 0;
		int factorial = 1;
	printf("Enter a normal number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num );
		if(num == 0)
			printf("The factorial of 0 is 1\n");
		else if(num > 0)
		{while(!num==0)
		{
			factorial = factorial * num;
			num--;
		}
		printf("The factorial of %d is = %d \n",num, factorial);
		}
		else if (num < 0)
			printf("Error: negative numbers has no factorial \n ");

	}
	return 0;
}

