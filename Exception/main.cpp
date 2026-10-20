#include <iostream>
#include "MyExp.h"
using namespace std;

int Chia(int a, int b){
    return a / b;
}

int main(){
    int x, y;
    do{
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        try{
            if(y == 0)
                // throw 1;
                // throw 1.1;
                // throw Exp("Ngu chua");
                throw MyExp("Ngu lam", 1);
            else
                cout << Chia(x, y);
        }
        catch(int & e) {cout << "int: " << e << endl;}
        catch(double& e) {cout << "double: " << e << endl;}
        catch(MyExp& e) {cout << e;}
        catch(Exp& e) {cout << e;}
        catch(...) {cout << "Chay di con" << endl;} 
    } while(y == 0);
}