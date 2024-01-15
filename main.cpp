#include "chambre.h"
#include "client.h"
#include "hotel.h"
#include "date.h"
#include <iostream>

int main(){
    Date d1(15,1,2024);
    // std::cout << d1.jour() << "/" << d1.mois() << "/" << d1.annee() << std::endl;

    Client c1("AAA1","Martin", "Jean");
    // std::cout << c1.getPrenom() << " " << c1.getNom() << " à " << c1.getIdentifiant() << " comme ID." << std::endl;

    Chambre ch1("0001", "Suite", 500);
    // std::cout << ch1.getType() << " numéro " << ch1.getNumero() << " coûte" << ch1.getPrix() << std::endl;

    std::vector <Chambre> chambresHotel;
    Hotel h1("XXX1", "California", "LA", chambresHotel);
    chambresHotel.push_back(ch1);

    for (auto i=0; i < int(chambresHotel.size()); i++){
        std::cout << chambresHotel[i] << std::endl;
    }

    std::cout << "L'hotel " << h1.getnomHotel() << " à " << h1.getVille() << " dont l'ID est " << h1.getidHotel() << " possède " << chambresHotel.size() << " chambres : " << std::endl;
    h1.getchambresHotel();
    
    return 0;
}