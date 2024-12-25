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
            if (product.Get_quantite_dispo() >= quantite){
                panierAchat_.push_back(PA{nom, quantite});
                product.setquantite(product.Get_quantite_dispo()-quantite);
                std::cout << "Le produit " << nom << " est ajoute au panier. Qte : " << quantite << std::endl;
            }
            else{
                std::cout << "quantite insuffisante" << std::endl;
            }
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
            for(auto& product : magasin.GetProduct())
             if(product.Get_titre() == nom){
                int qte_init = pa.quantite+product.Get_quantite_dispo();
                if (qte_init >= nouvellequantite){
                    pa.quantite = nouvellequantite;
                    product.setquantite(qte_init-nouvellequantite);
                }
                else{
                    std::cout << "Quantite impossible" << std::endl;
                    return;
                }
             }
            std::cout << "Quantite mise a jour pour " << nom << " : " << nouvellequantite << std::endl;
            return;
        }
    }
    std::cout << "Produit non trouve dans le panier : " << nom << std::endl;
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

std::ostream &operator<<(std::ostream &os, const Client& client)
{
    os << "Identifiant : " << client.get_id() << "\n"
       << "Prenom : " << client.get_prenom() << "\n"
       << "Nom : " << client.get_nom() << "\n"
       << "---- Panier d'achat ----" << "\n";
       if(client.panierAchat_.size() == 0){
        os << "- le panier d'achat est vide -";
       }
       else{
            for(auto& pa : client.panierAchat_){
                os << "Nom du produit : " << pa.nom << "\n"
                   << "Quantite(s) : " << pa.quantite << "\n";
            };
       };
    return os;
}
