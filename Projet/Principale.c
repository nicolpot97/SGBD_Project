#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ValidationCommande.h"
#include "ValidationFichier.h"

#define TAILLE_FICHIER 1000

int main(int argc, char const *argv[])
{
	//fichier xml
 	char const *fichierXml=argv[1];
 	validationXml(fichierXml);
 	

 	//fichier Json
 	FILE * fichierJson=fopen(argv[1], "r");
 	validationJson(fichierJson);

 	if(ValidationCommande(argc,argv)==1)
	{
		printf("yes\n");
	}

	return 0;
}