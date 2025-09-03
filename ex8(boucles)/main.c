#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,counter = 0;
    if(n > 0){
    	printf("entre un nombre positive : ");
        scanf("%d",&n);
	}
    while(n > 0){
    	counter++;
    	n=n/10;
	}
	printf("Nombre de chiffres = %d ",counter);
	return 0;
}
