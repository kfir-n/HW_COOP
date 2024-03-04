//
// Created by Kfir Nudelman on 03/03/2024.
//
#ifndef TRIP_H
#define TRIP_H

#include "Date.h"

class Trip {
public:
    Trip();
    Trip(int TripNum, const char* TripDesk, int day, int month, int year);
    ~Trip();

    void print() const;

    int getTripNum() const;
    const char* getTripDesk() const;
    Date getDate() const;

    void setTripNum(int TripNum);
    void setTripDesk(const char* TripDesk);
    void setDate(int day, int month, int year);

private:
    int TripNum;
    char* TripDesk;
    Date date;
};

#endif // TRIP_H

