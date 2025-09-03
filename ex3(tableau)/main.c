#include <stdio.h>
#include <stdlib.h>

/* tableau en ordre croissant */

int main(int argc, char *argv[]) {
	int T[5]={3,1,6,2,23};
	int i,j,temp = 0;
    for(i = 0 ; i < 5 ; i++){
        for (j = i + 1 ; j < 5 ;j++){
           if(T[i] > T[j]){
            temp = T[i];
            T[i] = T[j];
            T[j] = temp;
        }
        }
    }
	printf("le tableau croissant: ");
	for(i=0;i<5;i++){
	    printf("T[%d] = %d ",i,T[i]);
	}
	return 0;
}
