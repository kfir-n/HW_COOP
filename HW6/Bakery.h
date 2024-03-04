//
// Created by Kfir Nudelman on 03/03/2024.
//
#ifndef BAKERY_H
#define BAKERY_H

#include "cake.h"
#include "date.h"

class Bakery {
private:
    char* name;
    Date openingDate;
    int maxCakes;
    Cake** cakes; // Dynamic array of cake pointers
    int currentCakes; // To keep track of the number of cakes

public:
    // Constructor
    Bakery(const char* name, Date openingDate, int maxCakes);

    // Destructor
    ~Bakery();

    // Copy constructor and copy assignment operator
    Bakery(const Bakery& other);
    Bakery& operator=(const Bakery& other);

    // Methods
    void addCake(Cake* cake);
    void deleteCake(int position);
    void deleteExpired(const Date& currentDate);
    void chooseCake(double maxPrice) const;

    // Overloaded >> operator
    friend std::ostream& operator>>(std::ostream& os, const Bakery& bakery);
};

// Implementations for the methods and operators will go here

#endif //HW_COOP_BAKERY_H
