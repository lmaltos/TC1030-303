#include "Complex.h"

Complex::Complex(){

}

Complex::Complex(double x, double y) {
    real = x;
    imag = y;
}

Complex Complex::operator+(Complex const &obj) {
    //Complex ans;
    //ans.real = real + obj.real;
    //ans.imag = imag + obj.imag;
    // obj.real = 0; no se puede alterar por 
    Complex ans(real + obj.real, imag + obj.imag);
    return ans;
}

Complex Complex::operator*(double const &x) {
    Complex ans(real * x,imag * x);
    return ans;
}

std::string Complex::str() {
    return std::to_string(real) + " + " + std::to_string(imag) + " * i";
}

Complex resta(Complex const& x, Complex const& y) {
    Complex ans;
    ans.real = x.real + y.real;
    ans.imag = x.imag + y.imag;
}

std::ostream& operator<<(std::ostream &os, Complex const & obj) {
    os << obj.real << " + " << obj.imag << " * i";
    return os;
}