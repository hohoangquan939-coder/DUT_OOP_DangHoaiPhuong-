#pragma once
#include "SVCNTT.h"
#include "SVCK.h"

class QuanLiSV{

    private:
        SV **p;
        int n;

    public:
        QuanLiSV();
        ~QuanLiSV();

        void AddSV(SV&);
        void Show();
        void Update(const string&, SV& x);
        void Delete(const string&); // MSSV
        bool Search(const string&); // MSSV
        
        void Sort(); // sap xep tang dan theo GPA 

};
