#include <iostream>
using namespace std;

class Vector{
    private:
        int *p;
        int n;
    public: 
        Vector(const int& = 0);
        Vector(const Vector&);
        ~Vector();

        friend ostream& operator<<(ostream&, const Vector&);
        friend istream& operator>>(istream&, Vector&);

        int& operator[](const int&);
        const Vector& operator=(const Vector&);

        friend Vector operator+(const Vector&, const Vector&);
        Vector operator+(const Vector&);

};
