/*
 ============================================================================
 Name        : 4_ex2.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Program for calculating the average of entered data
#include <stdio.h>

int main(void) {
	float sum=0.0,avg=0.0;
	int data, i;
	float array[50];
	printf("Enter the number of data you want:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&data);


	if(data <= 50 && data > 0)
	{
	for(i=0;i<data;i++)
	{
		printf("\nEnter number%d:", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&array[i]);
		sum += array[i];
	}
	}
	avg=sum/data;
	printf("\nThe Average of entered data is: %.2f", avg);
	fflush(stdin); fflush(stdout);

	return 0;
}
