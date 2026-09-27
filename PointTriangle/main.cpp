#include <iostream>
#include "Triangle.h"
using namespace std;

int main(){
    
    Point p1(2, 4);
    Point p2(3, 4);
    
    Point p3 = 1 + p1;
    p3.Show();
    Point p4 = p3.operator-(p1);
    p4.Show();

    return 0;
}