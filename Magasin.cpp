#include "magasin.h"

Magasin::Magasin() {
    //init
    
}

void Magasin::ajouterProduit(const Produit& produit) {
    _products.push_back(produit);
}

void Magasin::afficherProduits() const {
    std::cout << "Liste des produits dans le magasin :\n";
    for (const auto& produit : _products) {
        std::cout << produit << "\n";
    }
}

void Magasin::afficherProduitParNom(const std::string& nom) const {
    std::cout << "Recherche du produit par nom : " << nom << "\n";

}

void Magasin::mettreAJourQuantiteProduit(const std::string& nom, int nouvelleQuantite) {
    std::cout << "Mise à jour de la quantité du produit : " << nom << "\n";

}