//
// Created by Kfir Nudelman on 03/03/2024.
//
#include <string>
#include <iostream>
#include "Cake.h"
#include "Date.h"
#include "MousseCake.h"
#include "BirthdayCake.h"

using namespace std;

int main() {
    Date expDate(19,1,1994);
    Cake cake(expDate,10,14.5,44.3,11,true);
    cout << cake;
    char* cakeName= "tartar";
    MousseCake kobi(expDate, 10,16.8,65.2,14,false,cakeName);
    cout << kobi;
    BirthdayCake menahem(expDate, 12, 15.5, 100.3, 13, false, cakeName);

    return 0;
}

