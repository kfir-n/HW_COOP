//
// Created by Kfir Nudelman on 03/03/2024.
//
#include "Cake.h"

Cake::Cake(const Date &expiryDate, int Diameter, double Height, double Price, int Storage, bool GlutenFree)
        : ExpiryDate(expiryDate) {

    this->diameter = Diameter;
    this->height = Height;
    this->price = Price;
    this->storage = Storage;
    this->glutenFree = GlutenFree;
}

Cake::Cake(const Cake &other) {}

bool Cake::operator==(const Cake& other) const{
    bool result = diameter == other.diameter &&
                  height == other.height &&
                  price == other.price &&
                  storage == other.storage &&
                  glutenFree == other.glutenFree;
    return result;
}

Cake& Cake::operator+=(double amount){
    price +=amount;
    return *this;
}

ostream &operator<<(ostream &os, const Cake &cake) {
    os << "ExpiryDate: " << cake.ExpiryDate << " diameter: " << cake.diameter << " height: " << cake.height
       << " price: " << cake.price << " storage: " << cake.storage << " glutenFree: " << cake.glutenFree;
    return os;
}
