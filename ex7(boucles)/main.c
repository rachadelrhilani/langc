#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int U,n,Ui,Ue,i;
	printf("entre un nombre");
    scanf("%d",&n);
	Ui = 0;
	Ue = 1;
	for(i = 0;i<=n;i++){
		U = Ui + Ue;
		Ui=Ue;
		Ue=U;
	}
	printf(" la suite fibonicci U%d:%d",n,U);
	return 0;
}
