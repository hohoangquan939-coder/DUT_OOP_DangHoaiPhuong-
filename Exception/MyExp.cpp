#include "MyExP.h"

MyExp::MyExp(string s, const int& n) : Exp(s) , n(n){

}

MyExp::~MyExp(){

}

ostream& operator<<(ostream& o, const MyExp& e){
    o << e.msg << ", " << e.n << endl;
    return o;
}