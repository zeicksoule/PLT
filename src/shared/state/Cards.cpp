#include "Cards.h"
#include <iostream>
using namespace std;

Cards::Cards(int idCard, std::string name, std::string description, CardTypes type, int nombresDeCartes) {
    this->idCard = idCard;
    this->name = name;
    this->description = description;
    this->type = type; 
    this->nombreDeCartes = nombreDeCartes;
}