//
// Created by Kfir Nudelman on 03/03/2024.
//

#include "PairOfShoes.h"
#define DEFAULT_INIT_STORAGE_SIZE 4

class ShoeStorage
{
    PairOfShoes** shoes; // Array of pointers to PairOfShoes.
    Some of them are NULL
    int arraySize;
    int capicity;
public:
    ShoeStorage(int initStorageSize =
    DEFAULT_INIT_STORAGE_SIZE);
    ShoeStorage(const ShoeStorage& storage);
    ShoeStorage& operator=(const ShoeStorage& storage);
    ~ShoeStorage();
    void AddPairOfShoes(const PairOfShoes& pair);
    int FindShoeByName(const std::string& shoeName) const;
    void RemovePairOfShoes(const std::string& shoeName);
    double GetPrice(const std::string& shoeName) const;
    double AverageShoePrice() const;
};
