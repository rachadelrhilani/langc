#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*affichez les informations de personne. */
    typedef struct Personne {
		char nom[40];
		char prenom[40];
		int age;
	}Personne;
int main(int argc, char *argv[]) {
	Personne p;
	char nom[30];
	char prenom[30];
	int age;
	printf("entre votre nom : ");
	scanf("%s",nom);
	printf("entre votre prenom : ");
	scanf("%s",prenom);
	printf("entre votre age : ");
	scanf("%d",&age);
    strcpy(p.nom,nom);
    strcpy(p.prenom,prenom);
    p.age = age;
	printf("nom : %s\n",p.nom);
	printf("prenom : %s\n",p.prenom);
	printf("age : %d\n",p.age);
	return 0;
}
