#pragma once

#include <vector>
#include "produit.h"
#include "client.h"
#include "commande.h"

class Magasin {
public:
    Magasin();
    void ajouterProduit(const Produit& produit);
    void afficherProduits() const;
    void afficherProduitParNom(const std::string& nom) const;
    void mettreAJourQuantiteProduit(const std::string& nom, int nouvelleQuantite);
    
    /*
    void ajouterClient(const Client& client);
    void afficherClients() const;
    void afficherClientParNomOuId(int id, const std::string& nom) const;
    void ajouterProduitAuPanier(int idClient, const Produit& produit, int quantite);
    void supprimerProduitDuPanier(int idClient, const Produit& produit);
    void modifierQuantiteProduitPanier(int idClient, const Produit& produit, int nouvelleQuantite);

    void validerCommande(int idCommande);
    void mettreAJourStatutCommande(int idCommande, const std::string& nouveauStatut);
    void afficherToutesCommandes() const;
    void afficherCommandesClient(int idClient) const;*/

private:
    std::vector<Produit> _products;
    std::vector<Client> _clients;
    std::vector<Commande> _orders;
};
