#include <iostream>
using namespace std;
#include "Matrix.h"

Matrix::Matrix(const int& r, const int& c) : r(r), c(c){
    if(this->r == 0 && this->c == 0){
        this->p = nullptr;
    }

    else{
        this->p = new int*[this->r];
        for(int i = 0; i < this->r; i++){
            *(this->p + i) = new int[this->c];
        }
        cin >> *(this);
    }
}

Matrix::Matrix(const Matrix& m) : r(m.r), c(m.c){
    this->p = new int*[m.r];
    for(int i = 0; i < this->r; i++){
       *(this->p+i) = new int[m.c];
        for(int j = 0; j < this->c; j++){
            *(*(this->p + i) + j) = *(*(m.p + i) + j);
        }
    }
}

Matrix::~Matrix(){
    for(int i = 0; i < this->r; i++){
        delete[] *(this->p + i);
    }
    delete[] this->p;
}

ostream& operator<<(ostream& os, const Matrix& v){
    for(int i = 0; i < v.r; i++){
        for(int j = 0; j < v.c; j++){
            os << "p[" << i << "][" << j << "]" << *(*(v.p + i) + j) << " ";
        }
        os << endl;
    }
    return os;
}

istream& operator>>(istream& is, Matrix& v){
    for(int i = 0; i < v.r; i++){
        for(int j = 0; j < v.c; j++){
            is >> *(*(v.p + i) + j);
        }
    }
    return is;
}