#include <iostream>
#include "IntSet.h"
using namespace std;
//class IntSet;

class RealSet
{
    private:
        double *q;
        int m;
        
    public:
        RealSet(const int&);
        ~RealSet();
        void Show();
        friend void IntSet::SetToReal(RealSet&);
        friend void SetToReal(IntSet&, RealSet&);
};