//
// Created by Kfir Nudelman on 03/03/2024.
//

#include "ShoeStorage.h"
#define DEFAULT_DISCOUNT 0.0

class ShoeStore
{
    ShoeStorage shoeStorage;
    double currentDiscountPrecent;
    double calculateDiscount(double price) const;
public:
    ShoeStore(double discountPercent = DEFAULT_DISCOUNT);
    void SetDiscountPercent(int discount) {
        currentDiscountPrecent = discount; }
    double GetDiscountPercent() const { return
                currentDiscountPrecent; }
    void AddShoes(const std::string& name, double price, int
    amount = 1);
    void RemoveOnePair(const std::string& name);
    double AverageShoePrice() const;
    double GetShoePrice(const std::string& shoeName) const;
};

