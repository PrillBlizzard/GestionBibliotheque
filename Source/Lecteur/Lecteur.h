
#include<string>
#include<vector>

class Lecteur {
    private:
    std::string nom;
    std::string prenom;
    std::string uniqueID;
    std::vector<std::string> bookList;

    public: 
    std::string getNom();
    std::string getPrenom();
    std::string getUniqueID();
    std::vector<std::string> getBookList();

    void ajouterLivre();
    void retirerLivre();

    void info();
};