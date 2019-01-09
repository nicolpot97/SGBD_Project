#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <libxml/xmlmemory.h>
#include </usr/include/libxml2/libxml/parser.h>
#include "FichierXml.h"


void getReference (xmlDocPtr doc, xmlNodePtr cur) 
{
	xmlChar *uri;
	cur = cur->xmlChildrenNode;
	while (cur != NULL) 
	{
		if ((!xmlStrcmp(cur->name, (const xmlChar *)"diagramme")))
	 	{
			uri = xmlGetProp(cur, "uri");
			printf("uri: %s\n", uri);
			xmlFree(uri);
		}
		cur = cur->next;
	}

	return;
}

void parseDoc(char *docname) 
{
	xmlDocPtr doc;
	xmlNodePtr cur;
	doc = xmlParseFile(docname);
	if (doc == NULL ) 
	{
		fprintf(stderr,"Document not parsed successfully. \n");
		return;
	}
	cur = xmlDocGetRootElement(doc);
	if (cur == NULL)
	{
		fprintf(stderr,"empty document\n");
		xmlFreeDoc(doc);
		return;
	}
	if (xmlStrcmp(cur->name, (const xmlChar *) "story")) 
	{
		fprintf(stderr,"document of the wrong type, root node != story");
		xmlFreeDoc(doc);
		return;
	}
	
	getReference (doc, cur);
	xmlFreeDoc(doc);
	return;
}
int main(int argc, char **argv)
 {
	char *nomFichierXml;
	if (argc <= 1) 
	{
		printf("Usage: %s nomFichierXml\n", argv[0]);
		return(0);
	}
	nomFichierXml = argv[1];
	parseDoc (nomFichierXml);
	return (1);
}