#include <iostream>
using namespace std;

// throw: Phát sinh ngoại lệ.
// try: Đặt đoạn code có khả năng phát sinh ngoại lệ.
// catch: Bắt và xử lý ngoại lệ.
// data type của catch phải giống với kiểu trả về của throw
// catch(...): bắt mọi ngoại lệ, luôn đứng cuối cùng của catch list 
// trong catch list, chỉ dùng duy nhất 1 catch, ko cs 2 catch được dùng cùng lúc 

// catch của class cha cs thể bắt ngoại lệ thuộc class con 
// nếu muốn dùng catch của class con thì đặt catch class con lên trước 
// Class con → Class cha → catch(...)

// throw; không tạo ngoại lệ mới. Nó ném lại ngoại lệ hiện tại, giữ nguyên kiểu và giá trị của ngoại lệ đó.
// throw; chỉ được dùng khi đang xử lí 1 exception, nếu ko cs exception mà gọi throw; thì kết thúc ctrinh

// Khi một hàm throw ngoại lệ mà không tự xử lý bằng catch,
// ngoại lệ sẽ truyền ngược qua các hàm gọi nó cho đến khi gặp catch phù hợp,
// đồng thời bỏ qua các câu lệnh chưa thực hiện trên đường truyền đó.

// Tạo class chứa các info về lỗi 
class StudentError{
    public:
        int code;
        string message;
        StudentError(int c, string m){
            this->code = c;
            this->message = m;
        }
};

class GradeError : public StudentError{
    public:
        int Grade;
        GradeError(int c, string msg, int grade) : StudentError(c, msg), Grade(grade){}
};



void CheckAge(int age) {
    if (age < 0) {
        throw age;
    }
    cout << "Tuoi hop le" << endl;
}

void Register(int age) {
    CheckAge(age);
    cout << "Dang ky thanh cong" << endl;
}

int main() {
    try {
        Register(-5);
    }
    catch (int x) {
        cout << "Loi tuoi: " << x << endl;
    }

    return 0;
}