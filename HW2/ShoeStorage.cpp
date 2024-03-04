//
// Created by Kfir Nudelman on 03/03/2024.
//

#include "ShoeStorage.h"

ShoeStorage::ShoeStorage(int initStorageSize)
{
    this->shoes = new PairOfShoes*[initStorageSize];
    for (int i = 0; i < initStorageSize; i++)
        this->shoes[i] = nullptr;
    this->capicity = initStorageSize;
    this->arraySize = 0;
}
//copy constructor
ShoeStorage::ShoeStorage(const ShoeStorage& storage)
{
    this->shoes = nullptr; //cirtial
    initialize for the operator=, if it isnt set to nullptr,
            *this = storage; //the program
    will try to free unallocated grabage memory.
}
//assignment operator performs deep copy
ShoeStorage& ShoeStorage::operator=(const ShoeStorage& storage)
{
    if (this == &storage)
        return *this;
    for (int i = 0; i < this->arraySize; i++)
        delete this->shoes[i];
    delete[] this->shoes;
    this->shoes = new PairOfShoes*[storage.capicity];
    this->arraySize = storage.arraySize;
    this->capicity = storage.capicity;
    for (int i = 0; i < this->capicity; i++)
        this->shoes[i] = nullptr;
//we have to put null in all the cells!
    for (int i = 0; i < this->arraySize; i++) //now, we
        copy only the relevant objects
    if (storage.shoes[i] != nullptr)
        this->shoes[i] = new
                PairOfShoes(*(storage.shoes[i])); //we have to save the
    physical object and not adress.
    return *this;
}
ShoeStorage::~ShoeStorage()
{
    for (int i = 0; i < this->arraySize; i++)
        delete this->shoes[i];
    delete[] this->shoes;
    this->shoes = nullptr;
}
void ShoeStorage::AddPairOfShoes(const PairOfShoes& pair)
{
    if (this->arraySize == this->capicity)
    {
        {
            this->capicity *= 2;
            ShoeStorage temp(*this);
            temp.AddPairOfShoes(pair);
            *this = temp;
        }
//here temp's dtor is called
    }
    else
        this->shoes[this->arraySize++] = new
                PairOfShoes(pair);
}
//removes one pair of shoes of a given name
void ShoeStorage::RemovePairOfShoes(const std::string& shoeName)
{
    int index = FindShoeByName(shoeName);
    if (index != -1)
    {
        delete this->shoes[index];
        this->shoes[index] = nullptr;
    }
}
//returns the price of a given shoe name, returns 0 if shoes is
not found
double ShoeStorage::GetPrice(const std::string& shoeName) const
{
    int index = FindShoeByName(shoeName);
    return index == -1 ? 0 : this->shoes[index]->GetPrice();
//cheking if the shoe was found and return accordingly.
}
//returns the index of a pair of shoes by name, returns -1 id
shoes not found
int ShoeStorage::FindShoeByName(const std::string& shoeName)
const
{
    for (int i = 0; i < arraySize; i++)
//in order to prevent duplication, this function will be called
        several times.
    if (this->shoes[i] != nullptr &&
        this->shoes[i]->GetName() == shoeName)
        return i;
    return -1;
}
double ShoeStorage::AverageShoePrice() const
{
    double price = 0;
    int numberOfShoes = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if (this->shoes[i] != nullptr)
        {
            numberOfShoes++;
            price += this->shoes[i]->GetPrice();
        }
    }
    return price > 0 ? price / numberOfShoes : 0;
//if price > 0 then also numberOfShoes
}

