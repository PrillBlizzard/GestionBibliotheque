#include "../Emprunt/Emprunt.h"


class Bibliotheque{
    private:
    std::string nomBiblio;
    std::vector<Livre&> livresDispo;
    std::vector<Lecteur&> lecteurInscrits;
    std::vector<Auteur&> auteursConnus;

    public:
    Bibliotheque::Bibliotheque(std::string _nomDeLaBibliotheque = "bob" );

    std::string getNom();
    std::vector<Lecteur&> getListLecteur();
    std::vector<Livre&> getListLivres();
    std::vector<Auteur&> getListAuteurs();

    void addAuteurs();
    void addLivres();
    void addlecteurs();

};