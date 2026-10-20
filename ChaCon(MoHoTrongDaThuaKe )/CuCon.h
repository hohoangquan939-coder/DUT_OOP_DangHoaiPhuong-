#include "Cha1.h"
#include "Cha2.h"

class CuCon : public Cha1, public Cha2{
    // x (Cha1) y (Cha2)
    private:
        int z;
    public:
        CuCon(const int&, const int&, const int&);
        ~CuCon();

        void AB() override; //Báo rằng AB sẽ ghi đè lên 1 hàm virtual của lớp Cha
        // Nếu lớp Cha1, Cha2 kco AB thì sẽ báo lỗi 
        // override sẽ giúp dev báo lỗi nếu sai tham số 

};