#include <stdio.h>
#include <stdlib.h>

int main() {

char reponseUtilisateur[10];
char bufferoverflow1[10];
char bufferoverflow2[10];

        printf ("Hello, World!\n");
	printf ("Quel est votre nom ?\n");
	fgets (reponseUtilisateur, 10, stdin); // Plus puissant que Scanf et plus secure
	printf("Ah ! vous vous appelez donc %s !", reponseUtilisateur); 
printf("Ecrire n'importe quoi\n");  //test du buffer overflow
scanf("%s", bufferoverflow1);
printf("premier truc:%s", bufferoverflow1);
printf("second truc:%s", bufferoverflow1);
scanf("%s", bufferoverflow2);
printf("3eme truc :%s", bufferoverflow2);        

int compteur = 0;
for (compteur = 0; compteur < 10; compteur++)
{
char i = (char)compteur;
printf("Coucou %c \n", i);
 }
return 0;

}
