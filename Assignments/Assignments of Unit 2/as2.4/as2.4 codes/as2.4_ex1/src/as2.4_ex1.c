/*
 ============================================================================
 Name        : 4_ex1.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
//Program for summing two matrices
int main(void) {
	float mat1[3][3] , mat2[3][3] , sum[3][3];
	int i, j;

	printf("Enter first matrix values: \n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		printf("Enter a%d%d:",i+1,j+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&mat1[i][j]);
		fflush(stdin); fflush(stdout);
		}

	}
	printf("The matrix 1 is: \n");
	for(i=0 ; i<3 ; i++)
		{
			for(j=0 ; j<3 ; j++)
			{
			printf(" %.2f ",mat1[i][j]);
			}
		printf("\n");
		}


	printf("Enter Second matrix values: \n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		printf("Enter a%d%d:",i+1,j+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&mat2[i][j]);
		fflush(stdin); fflush(stdout);
		}

	}
	printf("The matrix 1 is: \n");
	for(i=0 ; i<3 ; i++)
		{
			for(j=0 ; j<3 ; j++)
			{
			printf(" %.2f ",mat2[i][j]);
			}
		printf("\n");
		}


	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		sum[i][j] = mat1[i][j] + mat2[i][j];
		}

	}
	printf("The Sum Matrix is: \n");
	for(i=0 ; i<3 ; i++)
		{
			for(j=0 ; j<3 ; j++)
			{
			printf(" %.2f ",sum[i][j]);
			}
		printf("\n");
		}
	return 0;
}
