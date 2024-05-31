#include "Complex.h"
#include <iostream>

using namespace std;

int main() {
    Complex a, b(2,3), c(4,1);
    a = b + c + b + b + c;
    cout << "Valor de a:" << endl;
    cout << a.str() << endl;
    cout << "* 2" << endl;
    a = a * 2;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}