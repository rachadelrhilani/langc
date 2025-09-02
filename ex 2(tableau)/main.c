#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,min;
	int T[4] = {12,23,90,5};
	min = T[0];
	for(i=0;i<4;i++){
		if(T[i]<min){
		   min = T[i];
	    } 
	}
	printf("le minimum est :%d",min);
	return 0;
}		
