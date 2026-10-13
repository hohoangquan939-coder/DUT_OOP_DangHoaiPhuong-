#include "SV.h"

SV::SV(string name, string mssv, float gpa, int drl, int day, int month, int year)
    : Name(name), MSSV(mssv), GPA(gpa), DRL(drl), DayofBirth(day, month, year)
{

}

string SV::GetMSSV(){
    return this->MSSV;
}

float SV::GetGPA(){
    return this->GPA;
}