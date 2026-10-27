#include <iostream>
using namespace std;


// template<typename T = int, typename U> -> Error: Default phải nằm cuối cùng
// template<typename T, typename U = float> -> T:bắc buộc, U mặc định float 
// template<typename T, int U = 10> -> T:bắc buộc, U: mặc định 10


template<typename T, typename U>
class Storage;  // Forward Declaration - Khai báo rằng tồn tại Storage<T, U>
// Cần khai báo trước vì ở operator<< có Storage<T, U>

template<typename T, typename U>
ostream& operator<<(ostream&, const Storage<T, U>&); // Khai báo trước 1 Func
// Cần khai báo trước vì operator<< bên trong Storage cần 1 func template  
// Cần khai báo operator<< là 1 func template vì để in mọi kiểu Storage<T, U>
// Nếu không khai báo operator<< như 1 func template, thì khi dùng cần định nghĩa từng cặp <T, U> -> <int, int>, <float, int>, ....

template<typename T, typename PiPo>
class Storage{
    private:
        T data;
        PiPo extra;
    public:
        Storage(T x, PiPo y){
            this->data = x;
            this->extra = y;
        }
        ~Storage();

        void SetData(T x);
        T GetData();
        void Show();

        friend ostream& operator<< <T, PiPo>(ostream& os, const Storage<T, PiPo>&);

};

template<typename T, typename O>
Storage<T, O>::~Storage(){
    cout << "Destroyed Object" << endl;
}

template<typename T, typename O>
void Storage<T, O>::SetData(T x){
    this->data = x;
}

template<typename T, typename OOO>
T Storage<T, OOO>::GetData(){
    return this->data;
}

template<typename T, typename U>
void Storage<T, U>::Show(){
    cout << this->data << " " << extra << endl;
}

template<typename T, typename U>
ostream& operator<<(ostream& os, const Storage<T, U>& s) {
    os << s.data << " " << s.extra;
    return os;
}

// Template specialization (Class)
// Không kế thừa từ Storage -> Nếu muốn dùng cần phải khai báo lại -> Bất lợi
// Đây là 1 class riêng hoàn toàn với Storage -> Chỉ dành riêng cho int, float
template<>
class Storage<int, float>{
    private:
        int data;
        float extra;
    public:
        Storage(int x, float y){
            this->data = x;
            this->extra = y;
        }
        ~Storage(){

        }

        void SetData(int x){
            this->data = x;
        }
        int GetData(){
            return this->data;
        }
        void Show(){
            cout << "Day la phien ban: <int, float>: " << this->data << " " << this->extra << endl;
        }

};


// function specialization
template<>
void Storage<int, int>::Show() { // Không làm <int, float> vì đã có rồi 
    cout << "Day la phien ban: <int, int>: " << this->data << " " << extra << endl;
}

int main(){

    Storage<int, float> b1(3, 3);
    
    {
        Storage<double, int> b2(3.2, 2);
        b2.Show(); // khởi tạo và bị thu hồi trong {}
    }
    
    b1.Show();

    Storage<int, double> b2(10, 3.14);
    b2.Show();

    Storage<int, int> b3(1, 3);
    b3.Show();

    return 0;
}