#include "Point4D.h"
#include <iostream>
using namespace std;

Point4D::Point4D(const int& x, const int& y, const int& z, const int& t) : Point3D(x, y, z){
    this->tVal = t;
    cout << "Tao Point4D" << endl;
}

Point4D::~Point4D(){
    cout << "Huy Point4D" << endl;
}

void Point4D::Show(){
    Point3D::Show();
    cout << this->tVal << endl;
}