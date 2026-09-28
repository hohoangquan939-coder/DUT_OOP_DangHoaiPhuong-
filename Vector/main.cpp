#include <iostream>
#include "Vector.h"
using namespace std;

int main(){

    Vector v(3);
    cin >> v;
    Vector v1(3);
    cin >> v1;

    Vector v2 = v1 + v;
    Vector v3 = v2 + v1;
    Vector v4 = v3;
    Vector v5 = v4.operator+(v3);

    cout << "v2:" << v2;
    cout << "v3; " << v3;
    cout << "v4: " << v4;
    cout << "v5: " << v5;

    cout << "! my name is quan and i'm really handsome" << endl;
 
    return 0;
}