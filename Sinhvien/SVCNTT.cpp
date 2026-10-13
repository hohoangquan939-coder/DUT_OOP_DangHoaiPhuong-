#include "SVCNTT.h"

SVCNTT::SVCNTT(const string& name, const string& mssv,
           const float& gpa, const int& drl,
           const int& day, const int& month, const int& year)
    : SV(name, mssv, gpa, drl, day, month, year)
{
}

SVCNTT::~SVCNTT(){

}

void SVCNTT::Xeploai() {
    if (GPA >= 3.6 && DRL >= 90) {
        cout << "Xuat sac" << endl;
    }
    else if (GPA >= 3.2 && DRL >= 80) {
        cout << "Gioi" << endl;
    }
    else if (GPA >= 2.5 && DRL >= 65) {
        cout << "Kha" << endl;
    }
    else {
        cout << "Yeu" << endl;
    }
}

void SVCNTT::Show() {
    cout << "Ho ten: " << Name
         << ", MSSV: " << MSSV
         << ", GPA: " << GPA
         << ", DRL: " << DRL
         << ", Ngay sinh: " << DayofBirth
         << ", Xep loai: ";
    Xeploai();
}