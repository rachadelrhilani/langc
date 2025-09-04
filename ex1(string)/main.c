#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* longeur sans utilise strlen */
int main(int argc, char *argv[]) {
	char chaine[30];
	int i;
	printf("entre un mot : ");
	scanf("%s",chaine);
	for(i = 0;chaine[i]!='\0';i++){
	}
	printf("%d",i);
	return 0;
}
