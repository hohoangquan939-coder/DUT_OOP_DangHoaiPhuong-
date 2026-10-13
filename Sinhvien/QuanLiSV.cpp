#include "QuanLiSV.h"

QuanLiSV::QuanLiSV() : n(0), p(nullptr){
}

QuanLiSV::~QuanLiSV(){
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
    cout << "Them sinh vien voi mssv: " << sv.GetMSSV() << endl;
}

void QuanLiSV::Update(const string& mssv, SV& x){
    for(int i = 0; i < this->n; i++){
        if((*(this->p + i))->GetMSSV() == mssv){
            *(this->p + i) = &x;
        }
    }
}

void QuanLiSV::Delete(const string& mssv) {
    int k = -1;

    for (int i = 0; i < this->n; i++) {
        if (this->p[i] != nullptr && this->p[i]->GetMSSV() == mssv) {
            k = i;
            break;
        }
    }

    if (k == -1) {
        cout << "Khong tim thay sinh vien voi mssv: " << mssv << endl;
        return;
    }

    SV** tmp = new SV*[this->n - 1];
    for (int i = 0; i < k; i++) {
        tmp[i] = this->p[i];
    }
    for (int i = k + 1; i < this->n; i++) {
        tmp[i - 1] = this->p[i];
    }

    delete[] this->p;
    this->p = tmp;
    this->n--;
    cout << "Da xoa sinh vien co mssv: " << mssv << endl;
}


void QuanLiSV::Show(){
    for(int i = 0; i < this->n; i++){
        p[i]->Show();
    }
}

bool QuanLiSV::Search(const string& mssv){
    for(int i = 0; i < this->n; i++){
        if((*(this->p + i))->GetMSSV() == mssv) return true;
    }
    return false;
}



void QuanLiSV::Sort(){
    // Selection sort
    for(int i = 0; i < this->n; i++){
        int index_min = i;

        for(int j = i + 1; j < this->n; j++){
            if(this->p[index_min]->GetGPA() > this->p[j]->GetGPA()){
                index_min = j;
            }
        }

        if(index_min != i){
            SV* tmp = this->p[index_min];
            this->p[index_min] = this->p[i];
            this->p[i] = tmp;
        }
    }
}
