/*
 ============================================================================
 Name        : 5_ex3.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Program for reversing a string by recursion
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char array[], int i, int len)
{
	char tmp;
	tmp = array[i];
	array[i] = array [len - i];
	array[len - i] = tmp;
	if(i == len / 2)
	{
	return;
	}
	reverse(array,i+1,len);
}

int main(void) {
	char array[100];
	int size;
	printf("Enter String to be reversed:");
	fflush(stdin); fflush(stdout);
	gets(array);
	fflush(stdin); fflush(stdout);
	size = strlen(array) - 1;
	reverse(array,0, size);
	printf("The string after reversing:\n%s", array);
	return EXIT_SUCCESS;
}
