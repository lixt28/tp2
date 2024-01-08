#include "chambre.h"
#include <string>
#include <vector>

class Hotel {
    public:
    Hotel(std::string idHotel, std::string nomHotel, std::string ville, std::vector <Chambre> chambresHotel);
    std::string getidHotel() const;
    std::string getnomHotel() const;
    std::string getVille() const;
    void getchambresHotel() const;
    void ajouterChambre(Chambre chambre);

    private:
    std::string _idHotel;
    std::string _nomHotel;
    std::string _ville;
    std::vector <Chambre> _chambresHotel;
};