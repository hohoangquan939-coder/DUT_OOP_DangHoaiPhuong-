#include <iostream>
using namespace std;

class Point{
    // public, private, protect
    private:
        int xVal, yVal;
    
    public:
        static int n;
    
    public:
        void TT(int);
        void Show();
        // Ham dung do nguoi dung tu dinh nghia 
        Point();
        // Ham dung co tham so
        Point(int, int);
        // Ham dung sao chep
        Point(const Point&);
        Point(const int&);

        // Ham huy khong co tham so
        ~Point();

        // Ham thanh vien tinh, khong can tao Object de goi
        static void PrintCount();

        friend Point operator+(const Point&, const Point&);
        friend Point operator-(const Point&, const Point&);
        Point operator-(const Point&);

        friend ostream& operator<<(ostream& os, const Point&);
        friend istream& operator>>(istream& is,Point&);
};