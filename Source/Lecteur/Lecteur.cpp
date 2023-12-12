
#include "Lecteur.h"


Lecteur::Lecteur(std::string _Nom, std::string _Prenom,
    std::string _uniqueID){
    
    nom=_Nom;
    prenom=_Prenom;
    uniqueID=_uniqueID;

}

std::string Lecteur::getNom(){
    return nom;
 };
std::string Lecteur::getPrenom(){
    return prenom;
};
std::string Lecteur::getUniqueID(){
    return uniqueID;
};
std::vector<std::string> Lecteur::getBookList(){
    return bookList;
};

void Lecteur::addLivre(std::string _ISBNEmprunt){
    bookList.push_back(_ISBNEmprunt);
};

void Lecteur::info(){
    std::cout << "Voici les infos sur le lecteur : " << uniqueID << std::endl;
    std::cout << "  - Prenom : " << prenom << std::endl;
    std::cout << "  - Nom : " << nom << std::endl;
    std::cout << "  - Identifiant Numerique : " << uniqueID << std::endl;
    std::cout << "  - La liste des ISBN des livres empruntes : " << std::endl; 
    for(int i=0; i < bookList.size(); i++){

        std::cout << "      - " << bookList[i] <<  std::endl;
    }
    std::cout << std::endl;
};