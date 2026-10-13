#pragma once
#include <iostream>
#include "Date.h"
using namespace std;

class SV{
    protected:
        string Name;
        string MSSV;
        float GPA;
        int DRL;
        
        Date DayofBirth;
        
    public:
        SV(string = "", string = "", float = 0, int = 0, int = 1, int = 1, int = 2000);
        virtual void Xeploai() = 0; // Class con bắt buộc phải override 
        virtual void Show() = 0;

        string GetMSSV();
};  