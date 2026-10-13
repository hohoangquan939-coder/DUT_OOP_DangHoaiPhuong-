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
        void Update(const string&, const SV&);
        void Delete(const string&); // MSSV
        void Search(const string&); // MSSV
        
        void Sort();

};
