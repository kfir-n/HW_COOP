//
// Created by Kfir Nudelman on 03/03/2024.
//
#ifndef EX5_BIRTHDAYCAKE_H
#define EX5_BIRTHDAYCAKE_H
#include "Cake.h"

class BirthdayCake : public Cake {
private:
    char* text[];
public:
    //constructor
    BirthdayCake(const Date &expiryDate, int diameter, double height, double price, int storage, bool glutenFree, char* text);

    //copy constructor
    BirthdayCake(const Cake &other, char *text);

    //set&get
    char *getText() const;

    void setText(char *text);

    //operators
    bool operator==(const Cake& other) const;
    Cake& operator+=(double amount);
    friend ostream &operator<<(ostream &os, const BirthdayCake &avi);
};


#endif //EX5_BIRTHDAYCAKE_H


