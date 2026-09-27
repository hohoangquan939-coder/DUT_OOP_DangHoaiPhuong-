#include <iostream>
#include "Point.h"
using namespace std;

void Point::TT(int n){
    this->xVal += n;
    this->yVal += n;
}

void Point::Show(){
    cout << this->xVal << " " << this->yVal << endl;
}

Point::Point(){
    cout << "Tao 1 diem" << endl;
    this->xVal = 0;
    this->yVal = 0;
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

Point::Point(const int& x){
    this->xVal = x;
    this->yVal = x;
}

Point::~Point(){
    cout << "Huy diem" << endl;
}

Point operator+(const Point& p1, const Point& p2){
    Point p3;
    p3.xVal = p1.xVal + p2.xVal;
    p3.yVal = p1.yVal + p2.yVal;
    return p3;
}

Point operator-(const Point& p1, const Point& p2){
    Point p3;
    p3.xVal = p1.xVal - p2.xVal;
    p3.yVal = p1.yVal - p2.yVal;
    return p3;
}

Point Point::operator-(const Point& p){
    Point p1(this->xVal - p.xVal, this->yVal - p.yVal);
    return p1;
}


ostream& operator<<(ostream& os, const Point& p){
    os << "(" << p.xVal << ", " << p.yVal << ")"; 
    return os;
}

istream& operator>>(istream& is, Point& p){
    cout << "Nhap x: ";
    is >> p.xVal;
    cout << "Nhap y: ";
    is >> p.yVal;
    return is;
}