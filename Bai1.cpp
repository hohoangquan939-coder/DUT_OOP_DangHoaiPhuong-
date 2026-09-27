#include <iostream>
using namespace std;

void m1(){
    int x = 1;
    cout << &x << endl;
    int &y = x;
    y++;
    cout << y << ", " << x << endl;
    cout << &y << ", " << &x << endl;
    int *p = &x;
    cout << *p << ", " << x << ", " << y << endl;
    cout << p << ", " << &x << ", " << &y << endl;
    cout << &p << endl;
}

void m2(){
    int a = 1;
    const int b = 2;
    const int &x = b;
    cout << x << ", " << b << endl;
    const int &y = a;
    a++;
    cout << y << endl;
    const int &z = 5;
    cout << z << " " << &z << endl;
}

void m3(){
    enum Color{
        R,
        G,
        B = 5,
        Y
    };

    Color c = G;
    Color d = Y;
    cout << c << ", " << d << endl;
}

void A(int x, int y = 3, int z = 3){
    cout << x << " " << y << " " << z << endl;
}

void m4(){
    A(1);
    A(1,2,3);
    A(1,2);
}


int main(){
    m2();
    return 0;
}

