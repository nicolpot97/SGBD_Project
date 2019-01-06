#include<stdio.h>
#include<stdlib.h>
#include<libxml/parser.h>
#include"JSON_checker.h"
#include"ValidationFichier.h"

int ValidationFichier(int argc, char const *argv[])
{

int ValidationXml (char const *nomFichierXml)
{
	xmlDocPtr docXml;
	docXml= xmlParseFile(nomFichierXml);
	if (docXml== NULL)
	{
		fprintf(stderr, "Document XML non conforme\n");
		return EXIT_FAILURE;
	}

	xmlFreeDoc(docXml);

	return EXIT_SUCCESS;
}

int ValidationJson (FILE * fichierJson)
{
	int c;
	JSON_checker jc = new_JSON_checker(30);
 	if(fichierJson!=NULL)
 	{
 		while (1)
	 	{
	 		c= fgetc(fichierJson);
	 		if(feof(fichierJson)) break;

        	if (c<= 0) break;
       		if (!JSON_checker_char(jc, c)) 
       		{
	            fprintf(stderr, "JSON_checker_char: ERREUR SYNTAXIQUE \n");
	            exit(1);
        	}
    	}

    	if (!JSON_checker_done(jc)) 
    	{
	        fprintf(stderr, "JSON_checker_end: ERREUR SYNTAXIQUE \n");
	       exit(1);
	 	}

	 	fclose(fichierJson);
 	}

 	else printf("Veuiller ouvrir le fichier\n");

}
}