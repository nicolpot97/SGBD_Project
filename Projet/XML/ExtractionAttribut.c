#include <stdio.h>
#include <stdlib.h>
#include</usr/include/libxml2/libxml/parser.h>
#include "ExtractionAttribut.h"

 int ExtractionAttribut(char const * monFichierXml)
 {
    xmlDocPtr docxml;
    xmlNodePtr diagramme; 
    xmlNodePtr NoeudFils, Entite, Attribut;

    const xmlChar * NoeudFils_T[100];
    const xmlChar * Entite_T[100];
    const xmlChar * Attribut_T[100];
    xmlChar * key;
    int a,b,c;
    a=0, b=0, c=0;

    docxml = xmlParseFile(monFichierXml);
   if (docxml == NULL) 
    {
        printf("L'analyse du document rencontre un problème, le document XML est invalide\n");
        return 0;
    }
    else
    {
        printf("Le document est valide\n");
        diagramme = xmlDocGetRootElement(docxml); 
        if (diagramme == NULL) 
        {
            printf("Le document est vide\n");
            xmlFreeDoc(docxml);
            return 0;
        }
        printf("La noeud principal du document est : %s\n", diagramme->name);

        NoeudFils = diagramme->xmlChildrenNode; 
        while (NoeudFils != NULL) 
        {   
            if (NoeudFils->type == XML_ELEMENT_NODE)
            {
                NoeudFils_T[a]= NoeudFils->name;
                printf("NoeudFils %d: %s\n",a, NoeudFils_T[a]);
            }
            
            Entite= NoeudFils->xmlChildrenNode; 
            if (Entite != NULL)
            {
                printf("\tEntite(s) :");
            }
            while (Entite != NULL) 
            {
                if (Entite->type == XML_ELEMENT_NODE)
                { 
            
                    Entite_T[b]= Entite->name; 
                    printf("\t\t%s", Entite_T[b]);
                }
                Attribut= Entite->xmlChildrenNode;
                if (Attribut != NULL)
                {
                    printf(" Attribut(s) :");
                }
                while (Attribut != NULL)
                {
                    if (Attribut->type == XML_ELEMENT_NODE)
                    {
                        Attribut_T[c]=Attribut->name;
                        printf("\t%s", Attribut_T[c]);
                    }
                    c=c+1;
                    Attribut=Attribut->next;
                }
                printf("\n");
                b=b+1;
                Entite = Entite->next;
            }
            printf("\n");
            a=a+1;
            NoeudFils = NoeudFils->next;
        }
        xmlFreeDoc(docxml);
        return 1;
    }
    
}