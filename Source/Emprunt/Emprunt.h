#include "../Lecteur/Lecteur.h"

class Emprunt {

    private:
    Date dateEmprunt;
    Livre& livreEmpr;
    Lecteur& lecteurEmpr;
    bool isRendu=false;

    public:

    Emprunt(Date _dateEmprunt, Livre& _livreEmprunte,Lecteur& _emprunteur);
    void finEmprunt();
    void info();
    

};

