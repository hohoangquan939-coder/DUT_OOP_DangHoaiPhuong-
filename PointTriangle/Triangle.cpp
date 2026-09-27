#include <iostream>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(const int& a, const int& b, const int& c, const int& d, const int& e, const int& f) : 
    A(a, b), B(c, d), C(e, f)
{
    cout << "Tao mot tam giac moi" << endl;
}

Triangle::Triangle(const Point&a, const Point&b, const Point&c): A(a), B(b), C(c)
{
    cout << "Tao mot tam giac moi" << endl;
}

Triangle::~Triangle(){
    cout << "Huy tam giac" << endl;
}

void Triangle::Show(){
    A.Show();
    B.Show();
    C.Show();
}
