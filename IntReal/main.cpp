#include <iostream>
//#include "IntSet.h"
#include "RealSet.h"
using namespace std;

void SetToReal(IntSet& i1, RealSet& r1)
{
    delete[] r1.q;
    r1.m = i1.n;
    r1.q = new double[r1.m];
    for (int i = 0; i < i1.n; i++)
    {
        *(r1.q + i) = *(i1.p + i);
    }
}

int main()
{
    IntSet i1(3);
    RealSet r1(4);
    i1.Show();
    r1.Show();
    
    // Gọi hàm chuyển đổi
    SetToReal(i1, r1);
    r1.Show();
}