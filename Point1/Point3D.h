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

};