#include "magasin.h"
#include <iostream>

Magasin::Magasin() : _products(), _clients(), _orders() {}

void Magasin::AfficherInfo() const
{
    std::cout << "Le nombre de produits :" << _products.size() << std::endl;
    std::cout << "Le nombre de clients :" << _clients.size() << std::endl;
    std::cout << "Le nombre de commandes :" << _orders.size() << std::endl;
}

void Magasin::Ajouterproduct(const Product &product)
{
    _products.push_back(product);
}

void Magasin::AfficherProductALL() const
{
    if(_products.empty()){
        std::cout << "Il n'y a pas de produits" << std::endl;
    }
    for(const auto& product : _products){
         std::cout << product;
    }
}

void Magasin::AfficherProductNom(const std::string &nom)
{
}

void Magasin::MettreaJourqtite(const std::string &nom, int nouvellequantite)
{
}
