#include "hotel.h"
#include "chambre.h"
#include <iostream>

Hotel::Hotel(std::string idHotel, std::string nomHotel, std::string ville, std::vector <Chambre> chambresHotel):_idHotel(idHotel),_nomHotel(nomHotel),_ville(ville),_chambresHotel(chambresHotel){}

std::string Hotel::getidHotel() const{
    return _idHotel;
}

std::string Hotel::getnomHotel() const{
    return _idHotel;
}

std::string Hotel::getVille() const{
    return _ville;
}

void Hotel::getchambresHotel() const{
    for (auto i=0; i < _chambresHotel.size(); ++i){
        std::cout << _chambresHotel[i] << std::endl;
    }
}