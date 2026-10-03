#include "Point.h"

class Point3D : public Point{

// Không kế thừa hàm dựng và hàm huỷ 
// Cần định nghĩa lại hàm dựng và hàm huỷ 
// Hàm dựng mặc định lớp cha được tự động gọi trước rồi mới gọi hàm dựng của lớp con 
// Hàm huỷ theo thứ tự ngược lại

// Nếu ko mún dùng hàm dựng mặc định thì dùng list khởi tạo thành viên
    
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