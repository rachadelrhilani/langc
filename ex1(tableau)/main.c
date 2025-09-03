#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int max;
	int T[10] = {12,34,7,19,29};
	max = T[0];
	int i ;
	for(i = 0;i<5;i++){
		if (T[i]>max){
			max = T[i];
		}
	}
	printf("le maximum dans ce tableau est :%d",max);
	return 0;
}
