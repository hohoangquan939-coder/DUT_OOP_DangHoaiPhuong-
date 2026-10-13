#include <iostream>
using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;

    public:
        Date(int d = 1, int m = 1, int y = 2000);

        // Prefix
        Date& operator++();
        Date& operator--();

        // Postfix
        const Date operator++(int);
        const Date operator--(int);

        Date& operator+=(int days);
        Date& operator-=(int days);

        // >> <<
        friend istream& operator>>(istream&, Date&);
        friend ostream& operator<<(ostream&, const Date&);
};