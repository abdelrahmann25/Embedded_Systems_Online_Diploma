/*
 ============================================================================
 Name        : 4_ex3.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
//Program for entering a matrix and calculate the transpose of it
int main(void) {
	float matrix[50][50];
	float tr[50][50];
	int i, j,r,c;
	printf("Enter Matrix size: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&r,&c);

if(r<=50 && r>0)
{
	if(c<=50 && c>0)
	{
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("Enter a%d%d value:", i + 1, j + 1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &matrix[i][j]);
		}
	}
	printf("The matrix is:");
	for (i = 0; i < r; i++) {
		fflush(stdin); fflush(stdout);
		printf("\n");
		for (j = 0; j < c; j++) {
			printf(" %2.2f ", matrix[i][j]);
			fflush(stdin); fflush(stdout);
		}
	}

	for (i = 0; i < r; i++) {
		for (j=0;j<c;j++)
		{
			tr[i][j] = matrix[j][i];
		}
	}
	printf("\n\nThe transpose matrix is:");
	for (i = 0; i < r; i++) {
			fflush(stdin);
			fflush(stdout);
			printf("\n");
			for (j = 0; j < c; j++) {
				printf(" %2.2f ", tr[i][j]);
				fflush(stdin);
				fflush(stdout);
			}
		}
	}
}
	return 0;
}

