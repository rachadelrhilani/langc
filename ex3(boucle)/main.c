#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	printf("entre un nombre");
	scanf("%d",&n);
	int k = 1;
	while(n!=0){
		printf("%d ",k);
		k=k+2;
		n--;
	}
	return 0;
}
