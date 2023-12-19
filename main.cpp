#include "./Source/Emprunt/Emprunt.h"

#include <string.h>
#include <iostream>

int main () {
    //phase de test 

    //

    Auteur d_Adams = Auteur("D.Adams","Adam","Douglas",Date(1952,3,11));
    Auteur Tolkien = Auteur("J.R.R Tolkien","Tolkien","John",Date(1892,1,3));

    Livre guideToGalaxy = Livre("The Hitchhiker's Guide to the Galaxy",
        d_Adams ,"Anglais","Science Fiction",Date(2021,5,4),"05933559445");
    Livre seigneurdesAnneaux_Tome1 = Livre("Le Seigneur de Anneaux : La communautée de l'anneau",
        Tolkien, "Anglais","Roman Fantasy", Date(1973), "2253011398 " );

    Lecteur Shawbasky = Lecteur("Sarrio","Elisa","Shawbasky");
   


    Shawbasky.info();
    seigneurdesAnneaux_Tome1.info();
    
    std::cout << " --------------------- " << std::endl;
    
    Emprunt emprunt_1 = Emprunt(Date(2023,12,5),guideToGalaxy, Shawbasky);
    Emprunt emprunt_2 = Emprunt(Date(2023,12,19), seigneurdesAnneaux_Tome1, Shawbasky);


    Shawbasky.info();
    seigneurdesAnneaux_Tome1.info();
    
    emprunt_1.finEmprunt();

    emprunt_1.info();
    emprunt_2.info();

return 0;
}
