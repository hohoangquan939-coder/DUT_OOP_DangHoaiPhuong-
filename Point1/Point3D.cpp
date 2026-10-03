#include "Point3D.h"

Point3D::Point3D(const int& x, const int& y, const int& z){
    this->xVal = x;
    this->yVal = y;
    this->zVal = z;
    cout << "Tao Point3D" << endl;
}

Point3D::~Point3D(){
    cout << "Huy Point3D" << endl;
}

void Point3D::Show3D(){
    cout << this->xVal << ", " << this->yVal << ", " << this->zVal << endl;
}

