#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*reverse une chaine*/
void inverse(char* chaine) {
    int i, j;
	char result[50];
    char temp;
    int len = strlen(chaine);

    	for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = temp;
        }

        printf("%s",chaine);
}
int main(int argc, char *argv[]) {
	char chaine[30];
     printf("entre un mot: ");
     scanf("%s",chaine);
	inverse(chaine);
	return 0;
}
