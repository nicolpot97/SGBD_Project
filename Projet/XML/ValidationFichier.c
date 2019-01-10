#include<stdio.h>
#include<stdlib.h>
#include</usr/include/libxml2/libxml/parser.h>
#include"ValidationFichier.h"

int ValidationXml (char const *nomFichierXml)
{
	xmlDocPtr doc;
	xmlNodePtr cur;
	doc = xmlParseFile(nomFichierXml);
	if (doc == NULL )
	 {
		fprintf(stderr,"l'analyse du document rencontre un problème le document n'est pas valide \n");
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
