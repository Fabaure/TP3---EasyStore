#ifndef CLIENT_H  
#define CLIENT_H

#include <string>
#include <vector>
#include "product.h"

struct PA{
    std::string nom;
    int quantite;
};


class Magasin; 

class Client{
    private:
        int identifiant_;
        std::string prenom_;
        std::string nom_;
        std::vector<PA> panierAchat_;
    public:
        Client(int id, std::string prenom, std::string nom, std::vector<PA> panierAchat);
        int get_id() const;
        std::string get_prenom() const;
        std::string get_nom() const;
        std::vector<PA> get_PA() const;

        void setquantite(int nouvellequantite);
        void AjouterProduitPanier(Magasin &magasin, const std::string& nom, int quantite);
        void ViderPanier();
        void ModifierQtePanier(Magasin &magasin, const std::string &nom, int nouvellequantite);
        void SuppProduitPanier(Magasin &magasin, const std::string &nom);
        friend std::ostream& operator<<(std::ostream& os, const Client& client);
};

#endif