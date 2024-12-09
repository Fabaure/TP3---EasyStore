#include <string>
#include <iostream>

class Product{
    private:
        std::string titre_;
        std::string desc_;
        int q_dispo_;
        float prix_unit_;
    public:
        Product(std::string titre, std::string description, int qtite_dispo, float prix);
        std::string Get_titre() const;
        std::string Get_description() const;
        int Get_quantite_dispo() const;
        float Get_prix_unitaire() const;
        void setquantite(int nouvellequantite);
        friend std::ostream& operator<<(std::ostream& os, const Product& product);
};