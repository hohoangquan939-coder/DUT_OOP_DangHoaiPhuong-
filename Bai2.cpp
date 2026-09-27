#include <iostream>
using namespace std;
int y = 1;

int& A(){
    static int x = 1;
    return x; 
}

int& B(){
    return y; // tra ve ref co the thay doi 
}

const int& C(){
    return y; // tra ve ref ko the thay doi 
}

void m1(){
    A()++;
    B()++;
    cout << A() << ", " << B() << endl;
    cout << C() << endl;
}

void m2(){
    int a = 10, b = 20;
    int *p1, *p2;
    p1 =  &a, p2 = &b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    *p1 = 50, *p2 = 90;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    *p1 = *p2;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
}

void m3(){
    int x = 1;
    int y = 2;

    int* const p1 = &x; // hang con tro -> ko duoc thay doi gia tri duoc tro 
    *p1 = 10;
    cout << *p1 << " " << x << endl;

    const int* p2;
    p2 = &x;
    p2 = &y;
    cout << *p2 << " " << y << endl;
}

void show(char* str){
    cout << str << endl;
}

void m4(){
    const char* str = "DUT";
    show(const_cast<char*>(str));
}

int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int TT(int a, int b, int (*p)(int, int)){
    return p(a, b);
}

void m5(){
    int (*p)(int, int);
    p = sum;
    cout << p(2, 3) << " " << TT(2, 3, sum) << endl;
    p = sub;
    cout << p(2,3) << " " << TT(2, 3, sub) << endl;
}

void m6(){
    int A[3] = {1, 2, 3};
    for(int i = 0; i < 3; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    int *p = A;

    // Dia chi A 
    cout << A << " " << &A[0] << " " << p << endl;
    // Dia chi A[1]
    cout << A+1 << " " << &A[1] << " " << p+1 << endl;
    // Gia tri A[2]
    cout << *(A+2) << " " << A[2] << " " << *(p+1) << endl; 
}

void m7(){
    int A[2][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Address of the first element
    cout << A << ", " << &A[0][0] << endl;
    // Address of A[1][0]
    cout << A+1 << ", " << &A[1][0] << endl;
    // Address of A[1][2]
    cout << *(A+1)+2 << ", " << &A[1][2] << endl;
    // Value of A[1][2]
    cout << *(*(A+1)+2) << " " << A[1][2] << endl;
}

void m8(){
    int row = 2, col = 3;
    int **p = new int*[row];
    for(int i = 0; i < row; i ++){
        *(p+i) = new int[col];
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> *(*(p+i)+j);
        }
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << *(*(p+i)+j) << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < row; i++){
        delete[] *(p+i);
    }
    delete[] p;
}

int main(){

    m8();


    return 0;
}