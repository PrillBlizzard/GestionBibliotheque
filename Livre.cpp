#include "Livre.h"

Livre::Livre(std::string _titre, std::string _auteur, std::string _langue,
        std::string _genre, Date _publication, std::string _ISBN ){

            titre=_titre;
            auteur=_auteur;
            langue=_langue;
            genre=_genre;
            publication=_publication;
            iSBN=_ISBN;

        }

void Livre::nouvelEmprunteur(std::string _idEmprunteur){

    emprunteurs.push_back(_idEmprunteur);

}

std::string Livre::getTitre(){
    return titre;
}
std::string Livre::getAuteur(){
    return auteur;
}
std::string Livre::getLangue(){
    return langue;
}
std::string Livre::getGenre(){
    return genre;
}
Date Livre::getDatePubli(){
    return publication;
}
std::string Livre::getISBN(){
        return iSBN;
}
std::vector<std::string> Livre::getEmprunteurs(){
    return emprunteurs;
}


