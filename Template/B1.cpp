#include <iostream>
#include "Vector.h"

using namespace std;

int main(){
    // Vector<int> v1(2);
    // Vector<double> v2(3);
    // Vector<Point> v3(2);
    // // v1.Show();
    // // v2.Show();
    // cout << v1 << v2 << v3;

    Vector<int, 2> v1(2);
    Vector<int, 3> v2(3);
    cout << v1 << v2;
}