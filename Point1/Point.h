#include <iostream>
using namespace std;

class Point{
    // public, private, protect
    protected: // Neu dung private thi class con ko truy cap duoc
        int xVal, yVal;
    
    public:
        Point(int = 0, int = 0);
        Point(const Point&);
        ~Point();
        void Show();
        
        //overload
        void A();
        void A(int);
};