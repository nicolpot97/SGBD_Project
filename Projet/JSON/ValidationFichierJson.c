#include<stdio.h>
#include<stdlib.h>
#include"JSON_checker.h"
#include"ValidationFichierJson.h"

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
	            fprintf(stderr, "JSON_checker_char: Vérifier la syntaxe \n");
	            return 0;
        	}
    	}

    	if (!JSON_checker_done(jc)) 
    	{
	        fprintf(stderr, "JSON_checker_end: Verifier la syntaxe \n");
	       return 0;
	 	}
	 	else return 1;

	 	fclose(fichierJson);
	 	 	}

 	else printf("Veuiller ouvrir le fichier\n");

}