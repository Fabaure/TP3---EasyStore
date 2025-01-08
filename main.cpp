#include "magasin.h"
#include <iostream>

int main(){
    Magasin EasyStore;
    Magasin PolyStore;
    EasyStore.AfficherInfo();
    EasyStore.AfficherProductALL();
    PolyStore.Ajouterproduct(Product("Menthe", "Plante", 5, 1.56));
    EasyStore.Ajouterproduct(Product("Eau", "Eau de source", 25, 1.35));
    EasyStore.Ajouterproduct(Product("Lait", "Lait de vache", 14, 2.65));
    EasyStore.Ajouterproduct(Product("Chocolat", "Chocolat au cacao", 27, 8.99));
    EasyStore.AfficherProductALL();
    EasyStore.AfficherProductNom("Chocolat");
    EasyStore.AfficherProductNom("Eau");
    EasyStore.MettreaJourqtite("Eau", 25);
    EasyStore.AfficherProductNom("Eau");
    EasyStore.AfficherInfo();



    Client Aurelien(152, "Aurelien", "LITRA", {});
    Client Nicolas(153, "Nicolas", "DEFOUR", {});


    Aurelien.AjouterProduitPanier(EasyStore, "Eau", 5);
    Aurelien.AjouterProduitPanier(EasyStore, "Lait", 1);
    Aurelien.AjouterProduitPanier(EasyStore, "Chocolat", 5);
    EasyStore.AfficherProductNom("Eau");
    EasyStore.AfficherProductNom("Lait");
    EasyStore.AfficherProductNom("Chocolat");
    std::cout << Aurelien;
    Aurelien.ModifierQtePanier(EasyStore, "Eau",6);
    EasyStore.AfficherProductNom("Eau");
    std::cout << Aurelien;
    Aurelien.SuppProduitPanier(EasyStore, "Eau");
    std::cout << Aurelien;
    EasyStore.AfficherProductNom("Eau");
    EasyStore.AfficherInfo();
    EasyStore.AjouterClient(Aurelien);
    EasyStore.AfficherInfo();
    EasyStore.AfficherClient();
    std::cout << std::endl;
    std::cout << "Premier recherche avec le NOM" << std::endl << std::endl;
    EasyStore.AfficherClientNomID("LITRA");
    std::cout << std::endl;
    std::cout << "Deuxieme recherche avec 152" << std::endl << std::endl;
    EasyStore.AfficherClientNomID("152");
    std::cout << std::endl;
    EasyStore.AjouterProductClient(152,"Lait",2);
    std::cout << std::endl;
    EasyStore.AfficherClientNomID("152");

    std::cout << "test" << std::endl;
    EasyStore.AjouterProductClient(153,"Lait",2);
    std::cout << "test2" << std::endl;
    std::cout << Nicolas;
    
    EasyStore.AfficherProductALL();

    Order cmmd1(Aurelien,Aurelien.get_PA(),"En cours");
    EasyStore.AjouterOrder(cmmd1);
    std::cout << cmmd1;
    EasyStore.ValidationCommande(cmmd1);
    std::cout << cmmd1;
    std::cout << "test2" << std::endl << std::endl;
    EasyStore.AfficherClientNomID("152");
    EasyStore.AfficherProductALL();
    EasyStore.AfficherOrderALL();



    return 0;
} 