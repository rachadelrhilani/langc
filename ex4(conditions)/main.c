#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0,b=0,x=0;
	printf("a =");
	scanf("%d",&a);
	printf("b =");
	scanf("%d",&b);
	x=pow((a+b),2);
	printf("la solution de l'equation est: %d",x);
	return 0;
}
