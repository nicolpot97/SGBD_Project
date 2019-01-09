#ifndef _FICHIERXML_
#define _FICHIERXML

xmlNodePtr Creer_Personne(const char *CNI, const char *Prenom, const char *Nom, const char *Age, const char *Sexe);
xmlNodePtr Creer_Voiture(const char *Marque, const char *Matricule, const char *Couleur);
xmlNodePtr Creer_Acheter(const char *DateAchat, const char *Matricule, const char *CNI);

#endif