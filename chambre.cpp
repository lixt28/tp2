#include "chambre.h"

Chambre::Chambre(std::string numero, std::string type, int prix):_numero(numero),_type(type),_prix(prix){}

std::string Chambre::getNumero() const {
    return _numero;
}

std::string Chambre::getType() const {
    return _type;
}

int Chambre::getPrix() const {
    return _prix;
}

void Chambre::changerPrix(Chambre chambre, int montant){
    if (montant > 0){
        _prix = _montant;
    }
}

