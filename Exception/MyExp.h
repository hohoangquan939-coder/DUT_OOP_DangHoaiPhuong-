#include "Exp.h"

class MyExp : public Exp{
    private:
        int n;
    public:
        MyExp(string = "", const int& = 0);
        ~MyExp();
        friend ostream& operator<<(ostream&, const MyExp&);
};