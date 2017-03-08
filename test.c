#include <stdio.h>
#include <stdlib.h>

int main() {

char reponseUtilisateur[10];
        printf ("Hello, World!\n");
	printf ("Quel est votre nom ?\n");
	fgets (reponseUtilisateur, 10, stdin); // Plus puissant que Scanf et plus secure
	printf("Ah ! vous vous appelez donc %s !", reponseUtilisateur); 
        return 0;

}
