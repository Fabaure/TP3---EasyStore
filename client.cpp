#include "client.h"
#include "magasin.h"

Client::Client(int id, std::string prenom, std::string nom, std::vector<PA> panierAchat)
    : identifiant_(id), prenom_(prenom), nom_(nom), panierAchat_(panierAchat)  {}

int Client::get_id() const
{
    return identifiant_;
}

std::string Client::get_prenom() const
{
    return prenom_;
}

std::string Client::get_nom() const
{
    return nom_;
}

std::vector<PA> Client::get_PA() const
{
    return panierAchat_;
}


void Client::AjouterProduitPanier(Magasin& magasin, const std::string& nom, int quantite)
{
    for (auto& product : magasin.GetProduct()){
        if (product.Get_titre() == nom){
            panierAchat_.push_back(PA{nom, quantite});
                std::cout << "Le produit " << nom << " est ajoute au panier. Qte : " << quantite << std::endl;
            }
            else{
                std::cout << "Produit indisponible" << std::endl;
            }
        }
}

void Client::ViderPanier()
{
    panierAchat_.clear();
}

void Client::ModifierQtePanier(Magasin& magasin, const std::string &nom, int nouvellequantite)
{
    for(auto& pa : panierAchat_){
        if(pa.nom == nom){
            pa.quantite = nouvellequantite;}
            std::cout << "Quantite mise a jour pour " << nom << " : " << nouvellequantite << std::endl;
            return;}
    std::cout << "Produit non trouve dans le panier : " << nom << std::endl;
}

void Client::SuppProduitPanier(Magasin& magasin, const std::string &nom){
    for (int i = 0; i < panierAchat_.size(); ++i) {
        if (panierAchat_[i].nom == nom) {
            panierAchat_.erase(panierAchat_.begin() + i); 
            std::cout << "Produit supprime du panier : " << nom << std::endl;
            return;
        }
    }
    std::cout << "Produit non trouve dans le panier : " << nom << std::endl;
}


std::ostream &operator<<(std::ostream &os, const Client& client)
{
    os << "Identifiant : " << client.get_id() << "\n"
       << "Prenom : " << client.get_prenom() << "\n"
       << "Nom : " << client.get_nom() << "\n"
       << "---- Panier d'achat ----" << "\n";
       if(client.panierAchat_.size() == 0){
        os << "- le panier d'achat est vide -" << "\n";
       }
       else{
            for(auto& pa : client.panierAchat_){
                os << "Nom du produit : " << pa.nom << "\n"
                   << "Quantite(s) : " << pa.quantite << "\n";
            };
       };
    return os;
}