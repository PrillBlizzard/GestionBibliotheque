#include "Bibliotheque.h"


Bibliotheque::Bibliotheque(std::string _nomDeLaBibliotheque){
    nomBiblio = _nomDeLaBibliotheque;
}

std::string Bibliotheque::getNom(){
    return nomBiblio;
}
 std::vector<Lecteur&>  Bibliotheque::getListLecteur(){
    return lecteurInscrits;
}
std::vector<Livre&>  Bibliotheque::getListLivres(){
    return livresDispo;
}
std::vector<Auteur&>  Bibliotheque::getListAuteurs(){
    return auteursConnus;
};


void Bibliotheque::addAuteurs(){

}
void Bibliotheque::addLivres(){

}
void Bibliotheque::addlecteurs(){

}