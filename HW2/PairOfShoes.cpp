//
// Created by Kfir Nudelman on 03/03/2024.
//

#include "PairOfShoes.h"

PairOfShoes::PairOfShoes(const std::string& name, double price)
        : name(name), price(price) {}
PairOfShoes::PairOfShoes(const PairOfShoes& pair) :
        PairOfShoes(pair.name, pair.price) {}
void PairOfShoes::SetPrice(double newPrice)
{
    this->price = newPrice;
}
double PairOfShoes::GetPrice() const
{
    return this->price;
}
const std::string& PairOfShoes::GetName() const
{
    return this->name;
}
