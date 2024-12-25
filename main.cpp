#include "magasin.h"
#include <iostream>

int main(){
    Magasin EasyStore;
    EasyStore.AfficherInfo();
    EasyStore.AfficherProductALL();
    EasyStore.Ajouterproduct(Product("Eau", "Eau de source", 25, 1.35));
    EasyStore.Ajouterproduct(Product("Lait", "Lait de vache", 14, 2.65));
    EasyStore.Ajouterproduct(Product("Chocolat", "Chocolat au cacao", 27, 8.99));
    EasyStore.AfficherProductALL();
    EasyStore.AfficherProductNom("Chocolat");
    EasyStore.AfficherProductNom("Eau");
    EasyStore.MettreaJourqtite("Eau", 50);
    EasyStore.AfficherProductNom("Eau");
    EasyStore.AfficherInfo();
    Client Aurelien(152, "Aurelien", "LITRA", {});
    Aurelien.AjouterProduitPanier(EasyStore, "Eau", 5);
    Aurelien.AjouterProduitPanier(EasyStore, "Lait", 1);
    Aurelien.AjouterProduitPanier(EasyStore, "Chocolat", 5);
    EasyStore.AfficherProductNom("Eau");
    EasyStore.AfficherProductNom("Lait");
    EasyStore.AfficherProductNom("Chocolat");
    std::cout << Aurelien;
    Aurelien.ModifierQtePanier(EasyStore, "Eau",50);
    EasyStore.AfficherProductNom("Eau");
    std::cout << Aurelien;
    return 0;
}