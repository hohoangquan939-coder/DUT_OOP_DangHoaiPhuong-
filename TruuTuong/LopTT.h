#include <iostream>
using namespace std;

// Nếu class cs 1 method thuần ảo thì là lớp trừu tượng 
// Ko đc khởi tạo object từ lớp trừu tượng 
// -> Không cần khởi tạo Constructor và Destructor
// Công dụng lớp trừu tượng: Tạo lớp bao các lớp có chung đặc điểm 

// Lớp trừu tượng thuần tuý: Mõi method đều thuần ảo (interface)

class LopTT{
    public:
        virtual void A1() = 0; // Khai báo method trừu tượng 
        void B1();
};