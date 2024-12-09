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
    return 0;
}