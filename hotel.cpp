#include "hotel.h"
#include <iostream>

Hotel::Hotel(std::string idHotel, std::string nomHotel, std::string ville, std::vector <Chambre> chambresHotel):_idHotel(idHotel),_nomHotel(nomHotel),_ville(ville),_chambresHotel(chambresHotel){}

std::string Hotel::getidHotel() const{
    return _idHotel;
}

std::string Hotel::getnomHotel() const{
    return _nomHotel;
}

std::string Hotel::getVille() const{
    return _ville;
}

std::ostream& operator<<(std::ostream& osHotel, Hotel& hotel){
    std::string display = "L' hotel " + hotel.getnomHotel() + " à " + hotel.getVille() + " dont l'id est " + hotel.getidHotel() + ".";
    osHotel << display << std::endl;
    return osHotel;
}

void Hotel::getchambresHotel() {
    for (auto i=0; i < int(_chambresHotel.size()); i++){
        std::cout << _chambresHotel[i] << std::endl;
    }
}