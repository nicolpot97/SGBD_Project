#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int XJ_Convertor(int argc, char const *argv[])
{
	if(strcmp(argv[1],"-i")==0)
	{
		if(strcmp(argv[2],"xml")==0 || strcmp(argv[2],"json")==0)
		{
			if(strcmp(argv[3],"-t")==0)
			{
				if(strcmp(argv[4],"-h")==0 || strcmp(argv[4],"-f")==0)
				{
					int x=strlen(argv[5]);
					if (strcmp(argv[2],"xml")==0 && (argv[5][x-4])=='.' && (argv[5][x-3])=='x' && (argv[5][x-2])=='m' && (argv[5][x-1])=='l' || strcmp(argv[2],"json")==0 && (argv[5][x-5])=='.' && (argv[5][x-4])=='j' && (argv[5][x-3])=='s' && (argv[5][x-2])=='o' && (argv[5][x-1])=='n' )
					{						
							if(strcmp(argv[6],"-o")==0)
							{
								int y=strlen(argv[7]);
							
									if((argv[7][y-4])=='.' && (argv[7][y-3])=='s' && (argv[7][y-2])=='v' && (argv[7][y-1])=='g')
									{
										printf("la commande saisie est correcte\n");
									}								
									else							
										printf("veuiller saisir l'extension .svg\n");
							}
							else
								printf("veuiller saisir l'option -o\n");
					}
					else
					{
						printf("vérifier si le fichier est au bon format sxml ou json et si l'extension est correcte\n");
				
					}
				}
				else					
					printf("option saisie incorrecte veuiller saisir l'option -h ou -f\n");							
			}						
			else
			{
				if(strcmp(argv[3],"-h")==0 || strcmp(argv[3],"-f")==0)
				{
					int z=strlen(argv[4]);
					if (strcmp(argv[2],"xml")==0 && (argv[4][z-4])=='.' && (argv[4][z-3])=='x' && (argv[4][z-2])=='m' && (argv[4][z-1])=='l' || strcmp(argv[2],"json")==0 && (argv[4][z-5]=='.') && (argv[4][z-4])=='j' && (argv[4][z-3])=='s' && (argv[4][z-2])=='o' && (argv[4][z-1])=='n' )
					{	
						if(strcmp(argv[5],"-o")==0)
							{
								int w=strlen(argv[6]);
							
									if((argv[6][w-4])=='.' && (argv[6][w-3])=='s' && (argv[6][w-2])=='v' && (argv[6][w-1])=='g' || (argv[6][w-4])=='j' && (argv[6][w-3])=='s' && (argv[6][w-2])=='o' && (argv[6][w-1])=='n')
									{
										printf("la commande saisie est correcte\n");
									}
									else							
										printf("Veuiller saisir l'extension .svg\n");
							}
							else
								printf("veuiller saisir l'option -o\n");
					}
					else
						printf("vérifier si le fichier est au bon format xml ou json et si l'extension est correcte\n");
				}
				else
					printf("option saisie incorrecte veuiller saisir l'option -h ou -f\n");
			}	
		}
		else
			printf("vérifier si vous avez bien saisi le bon format xml ou json\n"); 
	}
	else
		printf("option saisie incorrecte, veuiller saisir l'option -i\n");

	return 0;			
}