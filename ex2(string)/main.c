#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Concaténation de Chaînes */
int main(int argc, char *argv[]) {
    char chaine[10]="Ra";
    char chainee[10]="chad";
	strcat(chaine,chainee);
    printf("concat :%s",chaine);
	return 0;
}
