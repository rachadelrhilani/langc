#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char caractere;
	printf("entre un caractere");
	scanf("%c",&caractere);
	switch(caractere){
		case 'a':
			printf("le caractére saisi est un voyelle");
			break;
		case 'e':
			printf("le caractére saisi est un voyelle");
			break;
		case 'i':
			printf("le caractére saisi est un voyelle");
			break;
		case 'o':
			printf("le caractére saisi est un voyelle");
			break;
		case 'u':
			printf("le caractére saisi est un voyelle");
			break;
		case 'y':
			printf("le caractére saisi est un voyelle");
			break;
		default:
            printf("%c n'est pas une voyelle.\n", caractere);
	}
	return 0;
}
