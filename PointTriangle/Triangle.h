#include "Point.h"

class Triangle{
    private:
        Point A, B, C;
    
    public:
        Triangle(const int&, const int&, const int&, const int&, const int&, const int&);
        Triangle(const Point&, const Point&, const Point&);
        ~Triangle();

        void Show();
};