#include <string>

class Chambre {
    public:
    Chambre(std::string numero, std::string type, int prix);
    std::string getNumero() const;
    std::string getType() const;
    int getPrix() const;
    void changerPrix(Chambre chambre, int montant);

    private:
    std::string _numero;
    std::string _type;
    std::string _chambre;
    int _prix;
    int _montant;
};