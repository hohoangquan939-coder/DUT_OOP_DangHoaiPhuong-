#include <iostream>
#include "LopCT.h"
using namespace std;

int main(){
    LopCT ct;
    ct.A1();
    ct.B1();

    LopTT *p = &ct; //Có thể tạo con trỏ kiểu dữ liệu lớp trừu tượng cha -> lớp con
}