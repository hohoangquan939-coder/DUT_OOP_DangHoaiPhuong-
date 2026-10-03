#include <iostream>
#include "Triangle.h"
using namespace std;

int main(){
    
    Point p1(2, 4);
    Point p2(3, 4);
    Point p3 = p1++;
    Point p4 = ++p2;

    cout << p1 << p3;
    cout << p2 << p4;

    cout << (p1 == p2) ? true : false;
    cout << (p3 == p4) ? true : false;
    
    return 0;
}