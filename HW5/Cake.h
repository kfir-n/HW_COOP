//
// Created by Kfir Nudelman on 03/03/2024.
//
#ifndef EX5_CAKE_H
#define EX5_CAKE_H
#include "Date.h"
#include <ostream>
using namespace std;

class Cake {

protected:
    Date ExpiryDate;
    int diameter;
    double height;
    double price;
    int storage; // 1 for refrigrator 2 for freezer
    bool glutenFree;

public:
    //constructor
    Cake(const Date &ExpiryDate, int Diameter, double Height, double Price, int Storage, bool GlutenFree);

    //copy constructor
    Cake(const Cake &other);

    //operators
    bool operator==(const Cake& other) const;
    Cake& operator+=(double amount);

    friend ostream &operator<<(ostream &os, const Cake &cake);
    //friend==toString


};


#endif //EX5_CAKE_H

