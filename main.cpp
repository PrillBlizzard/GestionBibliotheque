#include "./Source/Lecteur/Lecteur.h"

#include <string.h>
#include <iostream>

int main () {
    

    //phase de test 
  


    //

    Date newDate = Date(2021,5,4);
    std::cout << toString(newDate) << std::endl;

    Auteur d_Adams = Auteur("D.Adams","Adam","Douglas",Date(1952,3,11));
    d_Adams.info();
    Auteur Tolkien = Auteur("J.R.R Tolkien","Tolkien","John",Date(1892,1,3));

    Livre guideToGalaxy = Livre("The Hitchhiker's Guide to the Galaxy",
        d_Adams ,"Anglais","Science Fiction",newDate,"05933559445");
    Livre seigneurdesAnneaux_Tome1 = Livre("Le Seigneur de Anneaux : La communautée de l'anneau",
        Tolkien, "Anglais","Roman Fantasy", Date(1973), "2253011398 " );

    guideToGalaxy.nouvelEmprunteur("Gael");
    guideToGalaxy.nouvelEmprunteur("Lucas");
    
    guideToGalaxy.info();

    Lecteur Shawbasky = Lecteur("Sarrio","Elisa","Shawbasky");
    Shawbasky.addLivre("111222333444");
    Shawbasky.info();

}
