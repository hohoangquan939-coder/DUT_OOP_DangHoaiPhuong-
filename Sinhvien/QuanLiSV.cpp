#include "QuanLiSV.h"

QuanLiSV::QuanLiSV() : n(0), p(nullptr){
}

QuanLiSV::~QuanLiSV(){
    for(int i = 0; i < this->n; i++){
        delete *(this->p + i);
    }
    delete[] this->p;
}

void QuanLiSV::AddSV(SV& sv){
    this->n += 1;
    SV** tmp = new SV*[this->n];
    for(int i = 0; i < this->n-1; i++){
        *(tmp + i) = *(this->p + i);
    }
    *(tmp+ this->n-1) = &sv;

    delete[] this->p;
    this->p = tmp;
}


void QuanLiSV::Show(){
    for(int i = 0; i < this->n; i++){
        p[i]->Show();
    }
}