#include <string>

class Client{
    public:
    Client(std::string identifiant, std::string nom, std::string prenom);
    std::string getIdentifiant() const;
    std::string getNom() const;
    std::string getPrenom() const;

    private:
    std::string _identifiant;
    std::string _nom;
    std::string _prenom;
};
