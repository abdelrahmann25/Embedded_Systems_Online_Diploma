/*
 ============================================================================
 Name        : 3_ex5.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char letter;
	printf("Enter character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&letter);
	printf("ASCII Code for %c is: %d",letter, letter);
	return 0;
}
