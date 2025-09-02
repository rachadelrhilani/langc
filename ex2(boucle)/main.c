#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	printf("entre un nombre :");
	scanf("%d",&n);
	int fct = 1;
	for(i = 1;i<=n;i++){
		fct *=i;
	}
	printf("la factorielle de %d est %d",n,fct);
	return 0;
}
