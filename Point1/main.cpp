#include <iostream>
#include "Point4D.h"
using namespace std;

// virtual
void m0(){
    Point3D p2(1, 2, 3);

    Point* p;

    p = &p2;

// Nếu không có virtual ở Point.h thì p sẽ tự động dùng Show theo kiểu con trỏ của nó 
// p là Point* -> dùng show ở Point
// Nếu có virtual ở Point.h cho Show, thì p sẽ dùng Show theo kiểu của object mà nó trỏ đến 
    p->Show();

// Vì show được kết thừa nên khi khai báo virtual chỉ cần khai báo show ở Point
}


// Con trỏ, upcast, downcast, slicing
void m1(){
    Point p1(1, 2);
    Point3D p2(3, 4, 5);
    
    Point* p;
    Point3D *pp;

    p = &p1;
    pp = &p2;
    p->Show(); 
    pp->Show();

    // upcast: Lấy địa chỉ object con rồi cho con trỏ class cha giữ
    p = &p2;

    // downcast: Ngược lại
    // pp = &p1 -> Error vì không được cho Point3D* -> Point vì cs những thuộc tính mà Point không có 
    pp = static_cast<Point3D*>(&p1);

    p->Show();
    pp->Show();

    // slicing: object con bị cắt phần dữ liệu riêng khi được copy vào 1 object class cha 
    Point p3(p1);
    Point p4(p2);
    p3 = p2;
}



int main(){

    m0();
    
    return 0;
}