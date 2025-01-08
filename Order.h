#include <vector>
#include <string>
#include "client.h"
#include "product.h"

class Order {
private:
    Client client_;                                 
    std::vector<PA> produits_;                  
    std::string statut_;                        
    

public:
    Order(const Client& client, const std::vector<PA>& produits, const std::string& statut);
    const Client& GetClient() const;
    const std::vector<PA>& GetProduits() const;
    const std::string& GetStatut() const;

    void SetStatut(std::string statut);
       
    friend std::ostream& operator<<(std::ostream& os, const Order& commande);
};
