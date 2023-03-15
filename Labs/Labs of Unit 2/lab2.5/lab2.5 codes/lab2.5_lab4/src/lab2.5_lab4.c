/*
 ============================================================================
 Name        : 5_lab4.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/* Write a program that produces the following output:
0123456789
123456789
23456789
3456789
456789
56789
6789
789
89
9
 */
#include <stdio.h>
#include <stdlib.h>

void print0_9(void)
{
int i,j,counter=0;
for (i = 0; i < 10; i++)
{
	for (j = counter; j < 10; j++)
	{
		printf("%d ", j);
	}
	counter++;
	printf("\n");
}
}
int main(void) {
	print0_9();
	return EXIT_SUCCESS;
}
