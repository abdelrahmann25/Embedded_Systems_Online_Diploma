/*
 ============================================================================
 Name        : 4_lab2.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	while (1) {
		float x[5], y[5];
		int i;
		for (i = 0; i < 5; i++) {
			printf("Enter x%d value for y(x) function: ", i + 1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &x[i]);
			y[i] = x[i] * x[i] + 5 * x[i] + 3;
		}
		for (i = 0; i < 5; i++) {
			fflush(stdin);
			fflush(stdout);
			printf("y[%d]=%f \n ", i+1 ,y[i]);
		}
	}
}
