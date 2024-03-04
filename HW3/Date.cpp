//
// Created by Kfir Nudelman on 03/03/2024.
//

#include "Date.h"
#include <iostream>

class Date {
private:
    int day, month, year;

public:
    // Constructors
    Date() : day(1), month(1), year(2000) {}
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Getters
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Setters
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    // Print function
    void print() const {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};
