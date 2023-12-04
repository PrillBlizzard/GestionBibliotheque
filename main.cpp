#include "Date.h"
#include "Livre.h"
#include <string.h>
#include <iostream>

int main () {
    
    Date newDate = Date(2021,5,4);

    std::cout << toString(newDate) << std::endl;

    Livre premierLivre = Livre("The Hitchhiker's Guide to the Galaxy",
        "Douglas Adams","Anglais","Science Fiction",newDate,"05933559445");

    premierLivre.nouvelEmprunteur("Bob");
    premierLivre.nouvelEmprunteur("Gaël");
    premierLivre.nouvelEmprunteur("Lucas");
    premierLivre.info();

}