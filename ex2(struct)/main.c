#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Etudiant {
	char nom[30];
	char prenom[30];
	int note[30];
}Etudiant;
/* Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant. */
int main(int argc, char *argv[]) {
	Etudiant e;
	int nbrnote;
	int i;
	printf("entre votre nom");
	scanf("%s",e.nom);
	printf("entre votre prenom");
	scanf("%s",e.prenom);
	printf("entre nbrnote que tu veux :");
	scanf("%d",&nbrnote);
	for(i=0;i<nbrnote;i++){
		printf("entre les nombres :");
		scanf("%d",&e.note[i]);
	}
	printf("le nom : %s\n",e.nom);
	printf("le prenom : %s\n",e.prenom);
	printf("les notes:[");
	for(i=0;i<nbrnote;i++){
		printf("%d ",e.note[i]);
	}
	printf("]");
	return 0;
}
