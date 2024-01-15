#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <string>

class Chambre {
    public:
    Chambre(std::string numero, std::string type, int prix);
    std::string getNumero() const;
    std::string getType() const;
    int getPrix() const;
    void changerPrix(Chambre chambre, int montant);
    friend std::ostream& operator << (std::ostream& osChambre, Chambre& chambre);

    private:
    std::string _numero;
    std::string _type;
    std::string _chambre;
    int _prix;
    int _montant;
};

#endif