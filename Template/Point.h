#include <iostream>
using namespace std;

class Point{
    protected:
        int xVal;
        int yVal;
    public:
        Point(const Point&);
        Point(const int& = 3, const int& = 3);
        virtual ~Point();
        friend ostream& operator<<(ostream&, const Point&);
        friend istream& operator>>(istream&, Point&); 
};

Point::Point(const Point& x){
    this->xVal = x.xVal;
    this->yVal = x.yVal;
}

Point::Point(const int& x, const int& y){
    this->xVal = x;
    this->yVal = y;
}

Point::~Point(){

}

ostream& operator<<(ostream& o, const Point& p){
    o << p.xVal << ", " << p.yVal << endl;
    return o;
}

istream& operator>>(istream& i, Point& p){
    cout << "xVal = ";
    i >> p.xVal;
    cout << "yVal = ";
    i >> p.yVal;
    return i; 
}


