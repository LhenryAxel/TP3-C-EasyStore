#pragma once

#include <vector>
#include "produit.h"
#include "client.h"
#include "commande.h"

class Magasin {
public:
    Magasin();
    // ... (autres fonctions membres nĂ©cessaires)

private:
    std::vector<Produit> _products;
    std::vector<Client> _clients;
    std::vector<Commande> _orders;
};
