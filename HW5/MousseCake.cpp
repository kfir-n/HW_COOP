//
// Created by Kfir Nudelman on 03/03/2024.
//
#include "MousseCake.h"
#include "Cake.h"

MousseCake::MousseCake(const Date &expiryDate, int diameter, double height, double price, int storage, bool glutenFree,
                       char *taste) : Cake(expiryDate, diameter, height, price, storage, glutenFree), taste(taste){

}

MousseCake::MousseCake(const Cake &other, char *taste) : Cake(other), taste(taste) {

}

char *MousseCake::getTaste() const {
    return getTaste();
}


void MousseCake::setTaste(char *taste) {
    taste = taste;
}

bool MousseCake::operator==(const MousseCake& other) const{
    bool result = diameter == other.diameter &&
                  height == other.height &&
                  price == other.price &&
                  storage == other.storage &&
                  glutenFree == other.glutenFree &&
                  taste == other.taste;
    return result;
}

MousseCake& MousseCake::operator+=(double amount){
    price += amount;
    return *this;
}

ostream &operator<<(ostream &os, const MousseCake &shimon){
    os << "ExpiryDate: " << shimon.ExpiryDate << " diameter: " << shimon.diameter << " height: " << shimon.height
       << " price: " << shimon.price << " storage: " << shimon.storage << " glutenFree: " << shimon.glutenFree << "Taste: " << shimon.getTaste();
    return os;
}


