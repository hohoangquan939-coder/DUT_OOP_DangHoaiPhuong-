#include <iostream>
using namespace std;

//function template 
template <typename T>
void HV(T& a, T& b){
    T t = a; a = b; b = t;
}

void HV(double& a, double& b){
    cout << a << ", " << b << endl;
}

template <typename T, typename U>
void A(T a, U b){
    cout << a << ", " << b << endl;
}

template<typename T, typename Q>
auto Multiply(T a, Q numberone){
    return a * numberone;
}
// cout << Multiply(3, 3.4) << endl;           -> <suy luận, suy luận>
// cout << Multiply<int>(3, 3.4) << endl;      -> <int, suy luận>
// cout << Multiply<int, int>(3, 3.4) << endl; -> <int, int>


template<typename T, typename U>
auto Divide(T a, U b){
    return a / b;
}
// cout << Divide(5, 2) << endl;    -> 5/2 = 2 -> return int -> 2
// cout << Divide(5.0 , 2) << endl; -> 5.0/2 = 2.5 -> return double -> 2.5 


template<typename World, int MyCat> // Bắt buộc phải <type, value> khi gọi hàm
void show(World a){
    cout << a << " " << MyCat << endl;
}
// show<int, 3>(3);

template<typename T, int ooo>
auto AddN(T a){
    return a + ooo;
}
// cout << AddN<int, 5>(10) << endl;        -> 5+10 = 15 -> 15
// cout << AddN<double, 3>(2.5) << endl;    -> 3+2.5 = 5.5 -> 5.5
// cout << AddN<3>(2.5) << endl;            -> Error vì compiler cs thể đoán type nhưng cần phải truyền theo thứ tự -> Lỗi 

template<int PiPoPiPo, typename T>
auto SumOfTheDay(T a){
    return a + PiPoPiPo;
}
// cout << SumOfTheDay<3>(3.4) << endl;       -> compiler suy luận T là double do truyền 3.4
// cout << SumOfTheDay<3, int>(3.4) << endl;  -> compiler ép T phải là int nên 3.4-> 3

int main(){
    

}