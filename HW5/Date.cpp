//
// Created by Kfir Nudelman on 03/03/2024.
//
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {
    this->month = month;
    this->day = day;
    this->year = year;
}


int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}


void Date::setDay(int newDay) {

    if (newDay >= 1 && newDay <= 31) {
        this->day = newDay;
    } else {
        this->day=0;
        throw "The Day value is invalid (should be 1-31)";

    }


}

void Date::setMonth(int newMonth) {
    if (newMonth >= 1 && newMonth <= 12) {
        this->month = newMonth;
    } else {
        this->month = 0;
        throw "The Month is in valid (should be 1-12)";
    }
}

void Date::setYear(int newYear) {
    if (newYear >= 1900 && newYear <= 2024) {
        this->year = newYear;
    } else {
        newYear = 0;
    }
}

ostream &operator<<(ostream &os, const Date &date) {
    os << "day: " << date.day << " month: " << date.month << " year: " << date.year;
    return os;
}




