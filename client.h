#include <string>
#include <vector>
#include "product.h"

class Client{
    private:
        int identifiant_;
        std::string prenom_;
        std::string nom_;
        std::vector<Product> panierAchat_;
    public:
        Client(int id, std::string prenom, std::string nom, std::vector<Product> panierAchat);
        void AjouterProduitPanier(const Product& product);
        void ViderPanier();
        void ModifierQtePanier();
        void SuppProduitPanier();
        friend std::ostream& operator<<(std::ostream& os, const Client& client);
};