#include<stdio.h>
#include<stdlib.h>
#include</usr/include/libxml2/libxml/parser.h>
#include"JSON_checker.h"
#include"ValidationFichier.h"

int ValidationXml (char const *nomFichierXml)
{
	xmlDocPtr doc;
	xmlNodePtr cur;
	doc = xmlParseFile(nomFichierXml);
	if (doc == NULL )
	 {
		fprintf(stderr,"l'analyse du document rencontre un problème \n");
		return 0;
	 }
	 else
	 {
	 	return 1;
	 }
	cur = xmlDocGetRootElement(doc);
	if (cur == NULL) 
	 {
		fprintf(stderr,"le document est vide\n");
		xmlFreeDoc(doc);
		return 0;
	 }
	if (xmlStrcmp(cur->name, (const xmlChar *) "diagramme")) 
		{
		fprintf(stderr,"document non conforme au format xml, noeud racine != diagramme\n");
		xmlFreeDoc(doc);
		return 0;

		}
}

/*int ValidationJson (FILE * fichierJson)
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
	            fprintf(stderr, "JSON_checker_char: Vérifier la syntaxe \n");
	            exit(1);
        	}
    	}

    	if (!JSON_checker_done(jc)) 
    	{
	        fprintf(stderr, "JSON_checker_end: Verifier la syntaxe \n");
	       exit(1);
	 	}

	 	fclose(fichierJson);
 	}

 	else printf("Veuiller ouvrir le fichier\n");

}*/
