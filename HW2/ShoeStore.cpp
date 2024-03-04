//
// Created by Kfir Nudelman on 03/03/2024.
//
#include "ShoeStore.h"

ShoeStore::ShoeStore(double discountPercent) :
        shoeStorage(), currentDiscountPrecent(discountPercent) {
}
//adds shoes to the storage
void ShoeStore::AddShoes(const std::string& name, double price,
                         int amount)
{
    for (int i = 0; i < amount; i++)
        this-
        >shoeStorage.AddPairOfShoes(PairOfShoes(name, price)); //if
    we will send reference, after the function ends it will be nullptr
}
//remove one pair from the storage
void ShoeStore::RemoveOnePair(const std::string& name)
{
    this->shoeStorage.RemovePairOfShoes(name);
}
//returns the average shoes price after discount
double ShoeStore::AverageShoePrice() const
{
    double price = this->shoeStorage.AverageShoePrice();
    return calculateDiscount(price);
}
//returns the shoe price after discount
double ShoeStore::GetShoePrice(const std::string& shoeName)
const
{
    double price = this->shoeStorage.GetPrice(shoeName);
    return calculateDiscount(price);
}
//given a price, this method calculates the price after discount
double ShoeStore::calculateDiscount(double price) const
{
    return price - price * currentDiscountPrecent / 100;
}
