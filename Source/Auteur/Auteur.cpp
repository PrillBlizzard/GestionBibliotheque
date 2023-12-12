
#include "Auteur.h"

Auteur::Auteur(std::string _NumID, std::string _Nom,
        std::string _Prenom, Date _DateNaissance){
            
    numID = _NumID;
    nom=_Nom;
    prenom=_Prenom;
    dateNaissance=_DateNaissance;

};

std::string Auteur::getNumID(){
    return numID;
};
std::string Auteur::getNom(){
    return nom;
};
std::string Auteur::getPrenom(){
    return prenom;
};
Date Auteur::getDateNaissance(){
    return dateNaissance;
};

void Auteur::info(){
    std::cout << "Voici les infos sur l'auteur : " << numID << std::endl;
    std::cout << "  - Prenom : " << prenom << std::endl;
    std::cout << "  - Nom : " << nom << std::endl;
    std::cout << "  - Identifiant Numerique : " << numID << std::endl;
    std::cout << "  - Date de naissance : " << toString(dateNaissance) << std::endl << std::endl;
}