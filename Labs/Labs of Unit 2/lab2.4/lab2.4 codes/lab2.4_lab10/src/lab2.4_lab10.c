/*
 ============================================================================

 Name        : 4_lab10.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Define a ID array of 20 elements and fill it with a random values using
rand() function between 1 and 100, then searches and counts the number of
values that satisfy the following condition:
The previous and the next values is lower than the center
ex: .. 1 3 6 3 7 5 5 3 8 6 4 7 2 9 .. >>> So 6 7 8 7 are accepted values*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int id[100];
	int selected_id[20];
	int i, s = 0;

	for (i = 0; i < 20; i++) {
		id[i] = rand() %100 ;
	}
	for (i = 1; i < 19; i++) {
		if (id[i] > id[i-1] && id[i] > id[i+1])
				{
					selected_id[s]=id[i];
					s++;
				}
			}
	printf("ID Array is: \n");
	for(i = 0; i < 19 ; i++)
		{
		printf(" %d ,",id[i]);
		}
	printf("\nSelected Values are: \n");
	for(i = 0; i < s ; i++)
	{
	printf(" %d ,",selected_id[i]);
	}
		return 0;
	}
