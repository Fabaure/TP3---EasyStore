#include "magasin.h"
#include <iostream>

int main(){
    Magasin EasyStore;
    EasyStore.AfficherInfo();
    Product Eau("Eau", "Eau de source", 25000, 1.35);
    std::cout << Eau;
    return 0;
}