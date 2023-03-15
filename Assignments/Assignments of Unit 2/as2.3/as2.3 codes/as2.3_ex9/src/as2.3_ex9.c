/*
 ============================================================================
 Name        : 3_ex9.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {

while(1)
{
	char alpha;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &alpha);

	if (!isalpha(alpha))
		printf("Error: not an alphabetical character \n");
	else if (alpha == 'a' || alpha == 'o' || alpha == 'i' || alpha == 'e' || alpha == 'u' ||
		alpha == 'A' || alpha == 'O' || alpha == 'I' || alpha == 'E' || alpha == 'U')
		printf("%c is vowel \n", alpha);
	else
		printf("%c is consonant \n", alpha);
}
return 0;
}
