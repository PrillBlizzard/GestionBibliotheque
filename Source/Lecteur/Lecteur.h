
#include<string>
#include<vector>
#include "../Livre/Livre.h"

class Lecteur {
    private:
    std::string nom;
    std::string prenom;
    std::string uniqueID;
    std::vector<std::string> bookList;

    public: 
    Lecteur(std::string _Nom="Unknown", std::string _Prenom="Anonymous",
    std::string _uniqueID="AnonymousNum1");
    Lecteur(const Lecteur &_oldLecteur);

    std::string getNom();
    std::string getPrenom();
    std::string getUniqueID();
    std::vector<std::string> getBookList();

    void addLivre(std::string _ISBNEmprunt);

    void info();
};