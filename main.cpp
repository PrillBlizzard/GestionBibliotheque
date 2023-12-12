#include "./Source/Date/Date.h"
#include "./Source/Livre/Livre.h"


#include <string.h>
#include <iostream>

int main () {
    

    //phase de test 
  


    //

    Date newDate = Date(2021,5,4);

    std::cout << toString(newDate) << std::endl;
    Auteur d_Adams = Auteur("D.Adams","Adam","Douglas",Date(1952,3,11));

    Livre premierLivre = Livre("The Hitchhiker's Guide to the Galaxy",
    d_Adams ,"Anglais","Science Fiction",newDate,"05933559445");

    premierLivre.nouvelEmprunteur("Bob");
    premierLivre.nouvelEmprunteur("Gaël");
    premierLivre.nouvelEmprunteur("Lucas");
    
    premierLivre.info();

    d_Adams.info();
}