#include "magasin.h"
#include <iostream>

Magasin::Magasin() : _products(), _clients(), _orders() {}

void Magasin::AfficherInfo() const
{
    std::cout << "Le nombre de produits :" << _products.size() << std::endl;
    std::cout << "Le nombre de clients :" << _clients.size() << std::endl;
    std::cout << "Le nombre de commandes :" << _orders.size() << std::endl;
}
