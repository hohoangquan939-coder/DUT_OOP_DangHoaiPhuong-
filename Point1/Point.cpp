#include <iostream>
#include "Point.h"
using namespace std;


void Point::Show(){
    cout << this->xVal << " " << this->yVal << endl;
}


Point::Point(int a, int b){
    cout << "Tao 1 diem" << endl;
    this->xVal = a;
    this->yVal = b;
}

Point::Point(const Point& p){
    cout << "Tao 1 diem" << endl;
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}


Point::~Point(){
    cout << "Huy diem" << endl;
}

