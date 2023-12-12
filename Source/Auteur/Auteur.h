
#include <string>
#include "../Date/Date.h"

class Auteur {

    private:
    std::string numID;
    std::string nom;
    std::string prenom;
    Date dateNaissance;

    public:
    Auteur(std::string _NumID = "None", std::string _Nom="Unknown",
        std::string _Prenom="Unknown", Date _DateNaissance=Date());

    std::string getNumID();
    std::string getNom();
    std::string getPrenom();
    Date getDateNaissance();

    void info();
    

};