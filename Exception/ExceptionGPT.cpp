#include <iostream>
using namespace std;

// throw: Phát sinh ngoại lệ.
// try: Đặt đoạn code có khả năng phát sinh ngoại lệ.
// catch: Bắt và xử lý ngoại lệ.
// data type của catch phải giống với kiểu trả về của throw
// catch(...): bắt mọi ngoại lệ, luôn đứng cuối cùng của catch list 
// trong catch list, chỉ dùng duy nhất 1 catch, ko cs 2 catch được dùng cùng lúc 

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




int main() {
    try {
        throw StudentError(404, "Ko tim thay sv");
    }
    catch (int x) {
        cout << "Exception int";
    }
    catch (double x) {
        cout << "Exception double";
    }
    catch(const StudentError& e){
        cout << e.code << endl;
        cout << e.message << endl;
    }
    catch (...) {
        cout << "Unknown exception";
    }

    return 0;
}