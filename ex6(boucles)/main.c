#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nbr,rev;
	printf("entre un nombre :");
	scanf("%d",&nbr);
	while(nbr != 0){
		rev= (rev*10) + (nbr %10);
		nbr = nbr/10;
	}
	printf("nombre reverse devient : %d",rev);
	return 0;
}
