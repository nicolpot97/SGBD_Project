#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ValidationCommande.h"
#include "ValidationFichierJson.h"
#include "JSON_checker.h"
#include "nxjson.h"
#include "ExtractionAttributJson.h"
#include "cJSON.h"

#define TAILLE_FICHIER 1000

int main(int argc, char const *argv[])
{
	FILE * fichierJson;
	FILE * f = fopen("fichier.json","r");
	
	if (argc==7)
	{
		fichierJson=fopen(argv[4], "r");
		strcmp(argv[4],"fichierJson")==0;
	}
	if (argc==8)
	{
		fichierJson=fopen(argv[5], "r");
		strcmp(argv[5],"fichierJson")==0;
	}

 	if(ValidationCommande(argc,argv)==1)
 	{
	
		if(strcmp(argv[2],"json")==0)
		{
			
			if(ValidationJson(fichierJson)==1)
			{
				ExtractionJSON (f);	
			}

		}
		else
		{
			printf("le fichier n'est pas valide veuiller verifiez le format\n");
			
		}

	}

	return 0;
}
