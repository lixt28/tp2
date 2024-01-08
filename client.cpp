#include "client.h"

Client::Client(std::string identifiant, std::string nom, std::string prenom):_identifiant(identifiant),_nom(nom),_prenom(prenom){}

std::string Client::getIdentifiant() const{
    return _identifiant;
}

std::string Client::getNom() const{
    return _nom;
}

std::string Client::getPrenom() const{
    return _prenom;
}

