/*
 ============================================================================
 Name        : 4_lab4.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float matrix[3][3];
	float tr[3][3];
	int i, c;

	for (i = 0; i < 3; i++) {
		for (c = 0; c < 3; c++) {
			printf("Enter m%d%d value:", i + 1, c + 1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &matrix[i][c]);
		}
	}
	printf("The matrix is:");
	for (i = 0; i < 3; i++) {
		fflush(stdin); fflush(stdout);
		printf("\n");
		for (c = 0; c < 3; c++) {
			printf(" %2.2f ", matrix[i][c]);
			fflush(stdin); fflush(stdout);
		}
	}

	for (i = 0; i < 3; i++) {
		for (c=0;c<3;c++)
		{
			tr[i][c] = matrix[c][i];
		}
	}
	printf("\n\nThe transpose matrix is:");
	for (i = 0; i < 3; i++) {
			fflush(stdin);
			fflush(stdout);
			printf("\n");
			for (c = 0; c < 3; c++) {
				printf(" %2.2f ", tr[i][c]);
				fflush(stdin);
				fflush(stdout);
			}
		}
	return 0;
}

