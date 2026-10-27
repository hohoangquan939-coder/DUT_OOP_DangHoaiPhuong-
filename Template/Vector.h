#include <iostream>
#include "Point.h"
using namespace std;

template<typename T, int U>
class Vector;
template<typename T, int U>
ostream& operator<<(ostream&, const Vector<T, U>&);

template<typename T, int U>
class Vector{
    private:
        T* p;
        int n;
    public:
        Vector(const int& = 0);
        ~Vector();
        T& operator[](const int&);
        friend ostream& operator<<<T>(ostream&, const Vector&);
        void Show();
};

template<typename T, int U>
ostream& operator<<(ostream& o, const Vector<T, U>& v){
    for(int i = 0; i < v.n; i++){
        o << *(v.p + i) << " ";
    }
    return o;
}

template<typename T, int U>
T& Vector<T, U>::operator[](const int& index){
    return *(this->p+index);
}

template<typename T, int U>
Vector<T, U>::Vector(const int& n) : n(n){
    this->p = new T[this->n];
    for(int i = 0; i < this->n; i++){
        cin >> *(this->p + i);
    }
}

template<typename T, int U>
Vector<T, U>::~Vector(){
    delete[] this->p;
}

template<typename T, int U>
void Vector<T, U>::Show(){
    for(int i = 0; i < this->n; i++){
        // cout << *(this->p + i) << " ";
        cout << (*this)[i] << " ";
    }
}

// template class Vector<int, 2>;
// template class Vector<double, 3>;
// // template class Vector<Point>;