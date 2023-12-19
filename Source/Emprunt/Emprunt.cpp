#include "Emprunt.h"

Emprunt::Emprunt(Date _dateEmprunt, Livre& _livreEmprunte,
    Lecteur& _emprunteur): livreEmpr(_livreEmprunte),lecteurEmpr(_emprunteur) {
        dateEmprunt = _dateEmprunt;
        isRendu = false;

        livreEmpr.nouvelEmprunteur(lecteurEmpr.getUniqueID());
        lecteurEmpr.addLivre(livreEmpr.getISBN());

    }

void Emprunt::info(){

    
    std::cout <<  std::endl << "Infos sur l'emprunt : " << std::endl;
    std::cout << "  - Date de l'emprunt : " << toString(dateEmprunt) << std::endl;
    std::cout << "  - Livre emprunte : " << livreEmpr.getTitre();
    std::cout << "ypar " << livreEmpr.getAuteur().getPrenom() << " " << livreEmpr.getAuteur().getNom();
    std::cout << " ISBN:" << livreEmpr.getISBN() <<  std::endl;
    std::cout << "  - ID du Lecteur emprunteur : " << lecteurEmpr.getUniqueID() << std::endl;
    if (isRendu){
        std::cout << "Le livre a été rendu" << std::endl;               
    }
    else {
        std::cout << "Le livre n'a pas encore été rendu" << std::endl;
    }
    std::cout << std::endl;
}

void Emprunt::finEmprunt(){
    isRendu=true;
}
