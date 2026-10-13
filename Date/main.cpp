#include <iostream>
#include "Date.h"
using namespace std;

int main(){

    Date d(12,3,2001);
    cout << d;
    d++;
    cout << d;
    --d;
    cout << d;
    
    return 0;
}