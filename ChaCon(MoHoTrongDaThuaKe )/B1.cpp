#include <iostream>
#include "CuCon.h"
using namespace std;

int main(){
    CuCon cc(1, 2, 3);
    cc.A1();
    cc.A2();
    cc.AB();
    cc.Cha1::AB();
    cc.Cha2::AB();
}