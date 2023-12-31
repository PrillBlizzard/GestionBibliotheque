#include "../Auteur/Auteur.h"
#include <vector>

class Livre {
    private:
    std::string titre;
    Auteur auteur;
    std::string langue;
    std::string genre;
    Date publication;
    std::string iSBN;
    std::vector<std::string> emprunteurs;
    
    public:

    Livre(std::string _titre, Auteur _auteur, std::string _langue,
        std::string _genre, Date _publication, std::string _ISBN);
    Livre();
    
    void nouvelEmprunteur(std::string _idEmprunteur);
    
    std::string getTitre();
    Auteur getAuteur();
    std::string getLangue();
    std::string getGenre();
    Date getDatePubli();
    std::string getISBN();
    std::vector<std::string> getEmprunteurs();

    void info();
};