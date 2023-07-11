#include<iostream>
using namespace std;
class Rational{
public:
Rational(int x, int y){ // default constructor
        num = x; den = y;
}
Rational(const Rational& r){ // copy constructor
        num = r.num;
        den = r.den;
}
Rational operator=(const Rational& r){ // assignment operator
        num = r.num;
        den = r.den;
	   return *this;
}
void print() {
cout << endl << num << " " << den;
}
// other declarations go here
private:
int num;
int den;
};
int main() {
        Rational x(1,10), y(2,7), z(1,6);
        x = y = z; // the contents of y will be copied into x
        x.print();
        y.print();
        z.print();
}

