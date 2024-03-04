//
// Created by Kfir Nudelman on 03/03/2024.
//
#include "BirthdayCake.h"

BirthdayCake::BirthdayCake(const Date &expiryDate, int diameter, double height, double price, int storage, bool glutenFree,
                           char *text) : Cake(expiryDate, diameter, height, price, storage, glutenFree), text(text){

}

BirthdayCake::BirthdayCake(const Cake &other, char *text) : Cake(other), text(text) {

}

char *MousseCake::getText() const {
    return getText();
}


void MousseCake::setText(char *text) {
    text = text;
}

bool BirthdayCake::operator==(const BirthdayCake& other) const{
    bool result = diameter == other.diameter &&
                  height == other.height &&
                  price == other.price &&
                  storage == other.storage &&
                  glutenFree == other.glutenFree &&
                  text == other.text;
    return result;
}

BirthdayCake& BirthdayCake::operator+=(double amount){
    price += amount;
    return *this;
}

ostream &operator<<(ostream &os, const BirthdayCake &avi){
    os << "ExpiryDate: " << shimon.ExpiryDate << " diameter: " << shimon.diameter << " height: " << shimon.height
       << " price: " << shimon.price << " storage: " << shimon.storage << " glutenFree: " << shimon.glutenFree << "text: " << shimon.getText();
    return os;
}

