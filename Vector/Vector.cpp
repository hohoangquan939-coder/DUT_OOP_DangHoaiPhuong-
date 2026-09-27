#include <iostream>
#include "Vector.h"
using namespace std;

Vector::Vector(const int& n) : n(n){
    if(this->n == 0){
        cout << "Vector duoc tao" << endl;
        this->p = nullptr;
    }
    else{
        cout << "Vector duoc tao" << endl;
        this->p = new int[this->n];
    }
}

Vector::Vector(const Vector& v) : n(v.n){
    this->p = new int[this->n];

    for(int i = 0; i < this->n; i++){
        *(this->p + i) = *(v.p + i);
    }

    cout << "Vector duoc tao" << endl;
}

Vector::~Vector(){
    delete[] this->p;
    cout << "Vector bi huy" << endl;
}


ostream& operator<<(ostream& os, const Vector& v){
    for(int i = 0; i < v.n; i++){
        os << *(v.p + i) << " ";
    }
    os << endl;
    return os;
}

istream& operator>>(istream& is, Vector& v){
    for(int i = 0; i < v.n; i++){
        cout << "p[" << i << "]: ";
        is >> *(v.p + i);
    }
    return is;
}

int& Vector::operator[](const int& index){
    static int NGU = 0;
    if(index >= 0 && index < this->n){
        return *(this->p + index);
    }
    return NGU;
}

const Vector& Vector::operator=(const Vector& v){
    if(this != &v){
        delete[] this->p;
        this->n = v.n;
        this->p = new int[this->n];
        for(int i = 0; i < this->n; i++){
            *(this->p + i) = *(v.p + i);
        }
    }
    cout << "=" << endl;
    return (*this);
}

Vector operator+(const Vector& v1, const Vector& v2){
    if(v1.n == v2.n){
        Vector v(v1);
        for(int i = 0; i < v.n; i++){
            *(v.p + i) += *(v2.p + i);
        }
        return v;
    }
    else{
        cout << "Khong the cong hai vector nay duoc" << endl;
        Vector v;
        return v;
    }
}


Vector Vector::operator+(const Vector& v){
    if(this->n != v.n){
        cout << "Khong the cong hai vector nay duoc" << endl;
        return Vector();
    }
    else{
        Vector v1(v);
        for(int i = 0; i < v1.n; i++){
            *(v1.p + i) += *(this->p + i);
        }
        return v1;
    }
}