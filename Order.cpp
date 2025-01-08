#include "Order.h"

Order::Order(const Client &client, const std::vector<PA> &produits, const std::string &statut)
    : client_(client), produits_(produits), statut_(statut) {}

const Client& Order::GetClient() const
{
    return client_;
}

const std::vector<PA>& Order::GetProduits() const
{
    return produits_;
}

const std::string& Order::GetStatut() const
{
    return statut_;
}

void Order::SetStatut(std::string statut)
{
    statut_ = statut;
}


std::ostream &operator<<(std::ostream &os, const Order &commande)
{
     os << "Commande du client : " << commande.client_.get_prenom() << " " << commande.client_.get_nom() << "\n"
        << "Statut : " << commande.statut_ << "\n"
        << "Produits achetes : \n";
    for (const auto& produit : commande.produits_) {
        os << "- Nom : " << produit.nom << ", Quantite : " << produit.quantite << "\n";
    }
    return os;
}
