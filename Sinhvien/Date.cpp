#include <iostream>
#include "Date.h"
using namespace std;


Date::Date(int d, int m, int y)
    : day(d), month(m), year(y) 
    {
    }

// Kiem tra nam nhuan
bool isLeapYear(int year) {
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}

// Tra ve so ngay trong thang
int daysInMonth(int month, int year) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;

        case 2:
            return isLeapYear(year) ? 29 : 28;
    }
    return 0;
}

// Prefix ++
Date& Date::operator++() {
    this->day++;

    if (this->day > daysInMonth(this->month, this->year)) {
        this->day = 1;
        this->month++;

        if (this->month > 12) {
            this->month = 1;
            this->year++;
        }
    }

    return *this;
}

// Prefix --
Date& Date::operator--() {
    this->day--;

    if (this->day < 1) {
        this->month--;

        if (this->month < 1) {
            this->month = 12;
            this->year--;
        }

        this->day = daysInMonth(this->month, this->year);
    }

    return *this;
}

// Postfix ++
const Date Date::operator++(int) {
    Date old = *this;

    ++(*this);

    return old;
}

// Postfix --
const Date Date::operator--(int) {
    Date old = *this;

    --(*this);

    return old;
}


Date& Date::operator+=(int day){
    for (int i = 0; i < day; i++) {
        ++(*this);
    }
    return *this;
}

Date& Date::operator-=(int day){
    for(int i = 0; i < day; i++){
        --(*this);
    }
    return *this;
}

istream& operator>>(istream& in, Date& d) {

    cout << "Ngay: " ;
    in >> d.day;
    cout << "Thang: " ;
    in >> d.month;
    cout << "Year: ";
    in >> d.year;

    return in;
}


ostream& operator<<(ostream& out, const Date& d) {
    if (d.day < 10)
        out << '0';

    out << d.day << '/';

    if (d.month < 10)
        out << '0';

    out << d.month << '/' << d.year;

    return out;
}


