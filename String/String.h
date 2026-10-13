#include <iostream>
using namespace std;

class String{
    private:
        char *s;
        int length;

    public:
        String(int);
        ~String();

        void Show();
        int Len();
        void operator=(const String&);
        void operator+=(const String&);
        void operator==(const String&) const;

        friend ostream& operator<<(ostream&, const String&);
        friend istream& operator>>(istream&, String&);

};