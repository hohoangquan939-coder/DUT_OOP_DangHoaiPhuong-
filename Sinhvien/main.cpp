#include <iostream>
#include "QuanliSV.h"
using namespace std;

int main(){

    QuanLiSV ql1;

    SVCNTT svcntt1("A", "0222", 3, 80, 4, 3, 2000);
    SVCNTT svcntt2("B", "0223", 3, 83, 6, 3, 2000);
    SVCNTT svcntt3("C", "0224", 4, 80, 4, 5, 2000);
    
    ql1.AddSV(svcntt1);
    ql1.AddSV(svcntt2);
    ql1.AddSV(svcntt3);

    ql1.Show();

    return 0;
}