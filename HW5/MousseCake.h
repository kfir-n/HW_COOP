//
// Created by Kfir Nudelman on 03/03/2024.
//
#ifndef EX5_MOUSSECAKE_H
#define EX5_MOUSSECAKE_H
#include "Cake.h"

class MousseCake : public Cake{
private:
    char* taste[];
public:
    // constructor
    MousseCake(const Date &expiryDate, int diameter, double height, double price, int storage, bool glutenFree,
               char *taste);

    // copy constructor
    MousseCake(const Cake &other, char *taste);

    // get&set
    char *getTaste() const;

    void setTaste(char *taste);

    // operators
    bool operator==(const MousseCake& other) const;
    MousseCake& operator+=(double amount);
    friend ostream &operator<<(ostream &os, const MousseCake &shimon);
};


#endif //EX5_MOUSSECAKE_H

