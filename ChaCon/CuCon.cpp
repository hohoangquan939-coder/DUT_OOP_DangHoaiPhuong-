#include "CuCon.h"
CuCon::CuCon(const int& x, const int& y, const int& z) : Cha1(x), Cha2(y){
    this->z = z;
}

CuCon::~CuCon(){
    cout << "Huy CuCon" << endl;
}

void CuCon::AB(){
    cout << "CuCon AB" << endl;
}