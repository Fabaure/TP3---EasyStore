#include "product.h"

Product::Product(std::string titre, std::string description, int qtite_dispo, float prix)    
    : titre_(titre), desc_(description),q_dispo_(qtite_dispo),prix_unit_(prix) {}

std::string Product::Get_titre() const
{
    return titre_;
}

std::string Product::Get_description() const
{
    return desc_;
}

int Product::Get_quantite_dispo() const
{
    return q_dispo_;
}

float Product::Get_prix_unitaire() const
{
    return prix_unit_;
}

void Product::setquantite(int nouvellequantite)
{
    q_dispo_ = nouvellequantite;
}

std::ostream &operator<<(std::ostream &os, const Product &product)
{
    os << "Titre du produit : " << product.Get_titre() << "\n"
       << "Description du produit : " << product.Get_description() << "\n"
       << "Quantite disponible : " << product.Get_quantite_dispo() << "\n"
       << "Prix du produit : " << product.Get_prix_unitaire() << "\n";
    return os;
}
