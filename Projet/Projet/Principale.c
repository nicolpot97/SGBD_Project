#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ValidationCommande.h"
#include "ValidationFichier.h"
#include </usr/include/libxml2/libxml/parser.h>
#include"JSON_checker.h"

#define TAILLE_FICHIER 1000

int main(int argc, char const *argv[])
{
	char const *file;
	if (argc==7)
	{
		file=argv[4];
	}
	
	if (argc==8)
	{
		file=argv[5];
	
	}

 	if(ValidationCommande(argc,argv)==1)
 	{
	
		if(strcmp(argv[2],"xml")==0 )
		{
			ValidationXml(file);
		}
	}
	
	else
	{
		return 0;
	}
	
	/*	if(strcmp(argv[2],"json")==0)
		{
			ValidationJson(file);
		}*/

	if(ValidationXml(file)==1)
	{
		printf("yes\n");
	}

	
/*	if(ValidationJson(file)==1)
	{
		printf("yes\n");
		
	}*/

	return 0;
}