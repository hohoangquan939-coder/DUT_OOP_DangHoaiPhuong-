#include "SVCK.h"

SVCK::SVCK(const string& name, const string& mssv,
           const float& gpa, const int& drl,
           const int& day, const int& month, const int& year)
    : SV(name, mssv, gpa, drl, day, month, year)
{
}


SVCK::~SVCK(){

}

void SVCK::Xeploai() {
    if (GPA >= 3.5 && DRL >= 95) {
        cout << "Xuat sac" << endl;
    }
    else if (GPA >= 3.0 && DRL >= 85) {
        cout << "Gioi" << endl;
    }
    else if (GPA >= 2.3 && DRL >= 70) {
        cout << "Kha" << endl;
    }
    else {
        cout << "Yeu" << endl;
    }
}

void SVCK::Show() {
    cout << "Ho ten: " << Name
         << ", MSSV: " << MSSV
         << ", GPA: " << GPA
         << ", DRL: " << DRL
         << ", Ngay sinh: " << DayofBirth
         << ", Xep loai: ";
    Xeploai();
}