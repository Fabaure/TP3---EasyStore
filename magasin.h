#include <vector>
#include "client.h"
#include "product.h"
#include "Order.h"

class Magasin{
    private:
        std::vector<Product> _products;
        std::vector<Client> _clients;
        std::vector<Order> _orders;
    public:
        Magasin();
        void AfficherInfo() const;
};