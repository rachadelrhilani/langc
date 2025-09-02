#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nbr1,nbr2,somme = 0;
	printf("entre premier nombre : ");
	scanf("%d",&nbr1);
	printf("entre premier nombre :");
	scanf("%d",&nbr2);
	if(nbr1 == nbr2){
		somme = (nbr1 + nbr2)*3;
		printf("le triple de la somme est :%d",somme);
	}
	else{
		somme = nbr1 + nbr2;
	    printf("la somme est :%d",somme);
	}
	return 0;
}
