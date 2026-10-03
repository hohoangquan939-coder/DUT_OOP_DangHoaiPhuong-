#include "Point3D.h"

// Kế thừa toàn bộ những gì có trong Point3D
// Chỉ kế thừa hàm A không cs tham số 
// Hàm dựng sẽ gọi từ đời đầu tiên -> hiện tại
// Hàm huỷ sẽ ngược lại

class Point4D : public Point3D{
    // xVal, yVal, zVal
    int tVal;
    public:
        Point4D(const int&, const int&, const int&, const int&);
        ~Point4D();

        //Show(), Show3D, A()
        void Show(); //Đa hình lại show 
};