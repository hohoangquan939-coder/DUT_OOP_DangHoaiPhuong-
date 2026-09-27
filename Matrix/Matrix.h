#include <iostream>
using namespace std;

class Matrix{
    private:
        int **p;
        int r, c;
    
    public:
        Matrix(const int& = 0, const int& = 0);
        Matrix(const Matrix&);
        ~Matrix();
        friend ostream& operator<<(ostream& os, const Matrix& v);
        friend istream& operator>>(istream& is, Matrix& v);
};