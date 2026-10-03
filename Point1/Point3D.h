#include "Point.h"

class Point3D : public Point{

// Khong ke thua ham dung va ham huy 
// Can dinh nghia lai ham dung va ham huy 
// Hàm dựng mặc định lớp cha được tự động gọi trước rồi mới gọi hàm dựng của lớp con 
// Nếu ko mún dùng hàm dựng mặc định thì dùng list khởi tạo thành viên
// Hàm huỷ theo thứ tự ngược lại
    
    private:
        int zVal;
    public:
        Point3D(const int& = 1, const int& = 1, const int& = 1);
        ~Point3D();
        void Show3D();
        void Show(); // Thông báo cho trình biên dịch sẽ define lại show
        
// Lớp con sẽ kế thừa toàn bộ overload của lớp cha
// Nếu lớp con overwrite 1 hàm overload thì các hàm overload của class cha bị che đi

// Kế thừa A() và A(int)
        void A(); //overwrite hàm A nên hàm A chứa tham số sẽ ko được tính

};