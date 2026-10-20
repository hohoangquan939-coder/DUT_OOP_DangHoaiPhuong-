#include <iostream>
using namespace std;
class Cha1{
    protected:
        int x;
    public:
        Cha1(const int& = 0);
        ~Cha1();
        
        void A1();
        virtual void AB();
};