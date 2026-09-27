#include "RealSet.h"
RealSet::RealSet(const int& m) : m(m)
{
    this->q = new double[this->m];
    for (int i = 0; i < this->m; i++)
    {
        cout << "q[" << i << "] = ";
        cin >> *(this->q + i);
    }
}

RealSet::~RealSet()
{
    delete[] this->q;
}

void RealSet::Show()
{
    for (int i = 0; i < this->m; i++)
    {
        cout << *(this->q + i) << " ";
    }
    cout << endl;
}