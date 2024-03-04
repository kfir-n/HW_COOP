//
// Created by Kfir Nudelman on 03/03/2024.
//
#ifndef DATE_H
#define DATE_H
#include <ostream>
class Date {
public:
    Date(int day = 1, int month = 1, int year = 2000);
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    friend std::ostream &operator<<(std::ostream &os, const Date &date);

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H




Cake.cpp

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

