#include "Livre.h"

Livre::Livre(std::string _titre, Auteur _auteur, std::string _langue,
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
Auteur Livre::getAuteur(){
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

void Livre::info(){
    std::cout << std::endl << "Voici les infos de ce livre : " << std::endl;
    std::cout << "  - Titre : " << titre << std::endl;
    std::cout << "  - Auteur : " << auteur.getPrenom() << " " << auteur.getNom() << std::endl;
    std::cout << "  - Genre : " << genre << std::endl;
    std::cout << "  - Langue : " << langue << std::endl;
    std::cout << "  - Date de publication : " << toString(publication) << std::endl;
    std::cout << "  - ISBN : " << iSBN << std::endl;
    std::cout << "  - La liste des derniers eprunteurs : " << std::endl;
    for(int i = 0; i < emprunteurs.size(); i++){
        std::cout << "      - " << emprunteurs[i] << std::endl;
    }
    std::cout << std::endl;
};
