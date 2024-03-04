//
// Created by Kfir Nudelman on 03/03/2024.
//

#include <string>

class PairOfShoes {
    const std::string name;
    double price;
public:
    PairOfShoes(const std::string &name, double price);

    PairOfShoes(const PairOfShoes &pair);

    const std::string &GetName() const;

    double GetPrice() const;

    void SetPrice(double newPrice);
};

