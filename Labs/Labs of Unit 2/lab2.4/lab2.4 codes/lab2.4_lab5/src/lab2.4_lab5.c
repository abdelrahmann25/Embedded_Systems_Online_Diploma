/*
 ============================================================================
 Name        : 4_lab5.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char names[4][20]={"Ahmed Osama" , "Abdelrahman Mamdouh", "Omar Mamdouh" , "Muhammed Mamdouh"};
	int i;
	for( i=0 ; i<4 ; i++)
	{
		printf("%s \n",names[i]);
	}
	return 0;
}
