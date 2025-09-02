#include <stdio.h>
#include <stdlib.h>

/* reverser le tableau */

int main(int argc, char *argv[]) {
	int tab[5]={1,2,3,4,5};
	int i,temp;
	for(i = 0;i<5 / 2;i++){
	    temp = tab[i];
        tab[i] = tab[4 - i]; 
        tab[4 - i] = temp;
	}
	for(i = 0;i<5;i++){
		printf("le tableau reverser :{%d ,}",tab[i]);
	}
	return 0;
}
