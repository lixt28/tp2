#ifndef HOTEL_H
#define HOTEL_H 

#include "chambre.h"
#include <string>
#include <vector>


class Hotel {
    public:
    Hotel(std::string idHotel, std::string nomHotel, std::string ville, std::vector <Chambre> chambresHotel);
    std::string getidHotel() const;
    std::string getnomHotel() const;
    std::string getVille() const;
    void getchambresHotel();
    void ajouterChambre(Chambre chambre);
    friend std::ostream& operator << (std::ostream& osHotel, Hotel& hotel);

    private:
    std::string _idHotel;
    std::string _nomHotel;
    std::string _ville;
    std::vector <Chambre> _chambresHotel;
};

#endif