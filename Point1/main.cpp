#include <iostream>
#include "Point3D.h"
using namespace std;

int main(){

    Point p1(1, 2);
    Point3D p2(2, 3, 4);

    p1.Show();
    p2.Show();
    p2.A();

    return 0;
}