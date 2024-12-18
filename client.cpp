#include "client.h"

Client::Client(int id, std::string prenom, std::string nom, std::vector<Product> panierAchat)
    : identifiant_(id), prenom_(prenom), nom_(nom), panierAchat_(panierAchat)  {}


void Client::AjouterProduitPanier(const Product &product)
{
    panierAchat_.push_back(product);
}

void Client::ViderPanier()
{
    panierAchat_.clear();
}

void Client::ModifierQtePanier(const std::string &nom, int nouvellequantite)
{
    for(auto& product : panierAchat_){
        if(product.Get_titre() == nom){
            product.setquantite(nouvellequantite);
        }
    }
}

void Client::SuppProduitPanier(const std::string &nom)
{
/*
    for(auto& product : panierAchat_){
        if(product.Get_titre() == nom){
            panierAchat_.erase();
        }
    }
*/
}

std::ostream &operator<<(std::ostream &os, const Client &client)
{
    // TODO: insert return statement here
}
