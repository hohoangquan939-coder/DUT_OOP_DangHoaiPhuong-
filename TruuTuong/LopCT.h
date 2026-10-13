#include "LopTT.h"

// Lớp con kế thừa từ lớp trừu tượng sẽ thành lớp trừu tượng
// -> override hàm thuần ảo của lớp trừu tượng cha để có thể tạo Object 

class LopCT : public LopTT{
    public:
        LopCT();
        ~LopCT();

        // A1() - B1()
        void A1() override;
};