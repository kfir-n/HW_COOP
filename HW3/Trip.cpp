//
// Created by Kfir Nudelman on 03/03/2024.
//

#include "Trip.h"
#include <iostream>
#include <cstring>

#include "Date.cpp"

class Trip {
private:
    int TripNum;
    char* TripDesk;
    Date date;

public:
    // Constructors
    Trip(int num, const char* desk, int day, int month, int year)
            : TripNum(num), date(day, month, year) {
        TripDesk = new char[strlen(desk) + 1];
        strcpy(TripDesk, desk);
    }

    // Destructor
    ~Trip() {
        delete[] TripDesk;
    }

    // Getters
    int getTripNum() const {
        return TripNum;
    }

    const char* getTripDesk() const {
        return TripDesk;
    }

    Date getDate() const {
        return date;
    }

    // Setters
    void setTripNum(int num) {
        TripNum = num;
    }

    void setTripDesk(const char* desk) {
        delete[] TripDesk;
        TripDesk = new char[strlen(desk) + 1];
        strcpy(TripDesk, desk);
    }

    void setDate(int day, int month, int year) {
        date.setDay(day);
        date.setMonth(month);
        date.setYear(year);
    }

    // Print function
    void print() const {
        std::cout << "Trip Number: " << TripNum << std::endl;
        std::cout << "Trip Description: " << TripDesk << std::endl;
        std::cout << "Date: ";
        date.print();
    }
};
