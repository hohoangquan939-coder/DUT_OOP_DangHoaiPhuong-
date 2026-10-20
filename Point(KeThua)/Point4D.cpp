#include "Point4D.h"
#include <iostream>
using namespace std;

// Nếu không muốn dùng hàm dựng mặc định thì dùng danh sách khởi tạo thành viên
Point4D::Point4D(const int& x, const int& y, const int& z, const int& t) : Point3D(x, y, z){
    this->tVal = t;
    cout << "Tao Point4D" << endl;
}

Point4D::~Point4D(){
    cout << "Huy Point4D" << endl;
}

// Overwrite
void Point4D::Show(){
    Point3D::Show(); // Dùng tại tính năng của lớp Point3D
    cout << this->tVal << endl;
}