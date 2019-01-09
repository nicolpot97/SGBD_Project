#include <stdlib.h>
#include <stdio.h>
#include <libxml/tree.h>
#include</usr/include/libxml2/libxml/parser.h>

int main(int argc, char const *argv[])
{

xmlNodePtr Creer_Personne(const char *CNI, const char *Prenom, const char *Nom, const char *Age, const char *Sexe) {
    xmlNodePtr Noeud_Personne;
    xmlNodePtr Noeud_Prenom;
    xmlNodePtr Noeud_Nom;
    xmlNodePtr Noeud_Age;
    xmlNodePtr Noeud_Sexe;

    // Création du noeud "Personne"
    if ((Noeud_Personne = xmlNewNode(NULL, BAD_CAST "Personne")) == NULL) {
        return NULL;
    }
    // Ajout de son attribut "CNI"
    if (xmlSetProp(Noeud_Personne, BAD_CAST "CNI", BAD_CAST CNI) == NULL) {
        xmlFreeNode(Noeud_Personne);
        return NULL;
    }
    //creation noeud "Prenom"
    if ((Noeud_Prenom = xmlNewNode(NULL, BAD_CAST "Prenom")) == NULL) {
        xmlFreeNode(Noeud_Personne);
        return NULL;
    }
    xmlNodeSetContent(Noeud_Prenom, BAD_CAST Prenom);

    // Ajout du noeud (Prenom) à son père (Personne)
    if (xmlAddChild(Noeud_Personne, Noeud_Prenom) == NULL) {
        xmlFreeNode(Noeud_Personne);
        xmlFreeNode(Noeud_Prenom);
        return NULL;
    }

    //creation noeud "Nom"
    if ((Noeud_Nom = xmlNewNode(NULL, BAD_CAST "Nom")) == NULL) {
        xmlFreeNode(Noeud_Personne);
        return NULL;
    }
    xmlNodeSetContent(Noeud_Nom, BAD_CAST Nom);

    // Ajout du noeud (Nom) à son père (Personne)
    if (xmlAddChild(Noeud_Personne, Noeud_Nom) == NULL) {
        xmlFreeNode(Noeud_Personne);
        xmlFreeNode(Noeud_Nom);
        return NULL;
    }
    //creation noeud "Age"
    if ((Noeud_Age = xmlNewNode(NULL, BAD_CAST "Age")) == NULL) {
        xmlFreeNode(Noeud_Personne);
        return NULL;
    }
    xmlNodeSetContent(Noeud_Age, BAD_CAST Age);

    // Ajout du noeud (Age) à son père (Personne)
    if (xmlAddChild(Noeud_Personne, Noeud_Age) == NULL) {
        xmlFreeNode(Noeud_Personne);
        xmlFreeNode(Noeud_Age);
        return NULL;
    }
    //creation noeud "Sexe"
    if ((Noeud_Sexe = xmlNewNode(NULL, BAD_CAST "Sexe")) == NULL) {
        xmlFreeNode(Noeud_Personne);
        return NULL;
    }
    xmlNodeSetContent(Noeud_Sexe, BAD_CAST Sexe);

    // Ajout du noeud (Sexe à son père (Personne)
    if (xmlAddChild(Noeud_Personne, Noeud_Sexe) == NULL) {
        xmlFreeNode(Noeud_Personne);
        xmlFreeNode(Noeud_Sexe);
        return NULL;
    }
  
    return Noeud_Personne;
}

xmlNodePtr Creer_Voiture(const char *Marque, const char *Matricule, const char *Couleur) {
    xmlNodePtr Noeud_Voiture;
    xmlNodePtr Noeud_Marque;
    xmlNodePtr Noeud_Couleur;

    // Création du noeud "Voiture"
    if ((Noeud_Voiture = xmlNewNode(NULL, BAD_CAST "Voiture")) == NULL) {
        return NULL;
    }
    // Ajout de son attribut "Matricule"
    if (xmlSetProp(Noeud_Voiture, BAD_CAST "Matricule", BAD_CAST Matricule) == NULL) {
        xmlFreeNode(Noeud_Voiture);
        return NULL;
    }
    //creation noeud "Marque"
    if ((Noeud_Marque = xmlNewNode(NULL, BAD_CAST "Marque")) == NULL) {
        xmlFreeNode(Noeud_Voiture);
        return NULL;
    }
    xmlNodeSetContent(Noeud_Marque, BAD_CAST Marque);

    // Ajout du noeud (Marque) à son père (Voiture)
    if (xmlAddChild(Noeud_Voiture, Noeud_Marque) == NULL) {
        xmlFreeNode(Noeud_Voiture);
        xmlFreeNode(Noeud_Marque);
        return NULL;
    }

    //creation noeud "Couleur"
    if ((Noeud_Couleur = xmlNewNode(NULL, BAD_CAST "Couleur")) == NULL) {
        xmlFreeNode(Noeud_Voiture);
        return NULL;
    }
    xmlNodeSetContent(Noeud_Couleur, BAD_CAST Couleur);

    // Ajout du noeud (Nom) à son père (Personne)
    if (xmlAddChild(Noeud_Voiture, Noeud_Couleur) == NULL) {
        xmlFreeNode(Noeud_Voiture);
        xmlFreeNode(Noeud_Couleur);
        return NULL;
    }
    
    return Noeud_Voiture;
}

xmlNodePtr Creer_Acheter(const char *DateAchat, const char *Matricule, const char *CNI) {
    xmlNodePtr Noeud_Acheter;
    xmlNodePtr Noeud_Matricule;
    xmlNodePtr Noeud_CNI;

    // Création du noeud "Acheter"
    if ((Noeud_Acheter = xmlNewNode(NULL, BAD_CAST "Acheter")) == NULL) {
        return NULL;
    }
    // Ajout de son attribut "DateAchat"
    if (xmlSetProp(Noeud_Acheter, BAD_CAST "DateAchat", BAD_CAST DateAchat) == NULL) {
        xmlFreeNode(Noeud_Acheter);
        return NULL;
    }
    //creation noeud "Matricule"
    if ((Noeud_Matricule = xmlNewNode(NULL, BAD_CAST "Matricule")) == NULL) {
        xmlFreeNode(Noeud_Acheter);
        return NULL;
    }
    xmlNodeSetContent(Noeud_Matricule, BAD_CAST Matricule);

    // Ajout du noeud (Marque) à son père (Voiture)
    if (xmlAddChild(Noeud_Acheter, Noeud_Matricule) == NULL) {
        xmlFreeNode(Noeud_Acheter);
        xmlFreeNode(Noeud_Matricule);
        return NULL;
    }

    //creation noeud "CNI"
    if ((Noeud_CNI = xmlNewNode(NULL, BAD_CAST "CNI")) == NULL) {
        xmlFreeNode(Noeud_Acheter);
        return NULL;
    }
    xmlNodeSetContent(Noeud_Matricule, BAD_CAST Matricule);

    // Ajout du noeud (Marque) à son père (Voiture)
    if (xmlAddChild(Noeud_Acheter, Noeud_CNI) == NULL) {
        xmlFreeNode(Noeud_Acheter);
        xmlFreeNode(Noeud_CNI);
        return NULL;
    }

       return Noeud_Acheter;
}

return 0;
}
