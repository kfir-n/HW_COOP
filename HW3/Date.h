//
// Created by Kfir Nudelman on 03/03/2024.
//

#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(int day = 1, int month = 1, int year = 2000);
    void print() const;

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H


