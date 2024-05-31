#pragma once
#include <string>
#include <iostream>

class Complex {
  private:
    double real;
    double imag;
  public:
    Complex();
    Complex(double,double);
    Complex operator+(Complex const &);
    Complex operator*(double const &);
    std::string str();
    friend Complex resta(Complex const&, Complex const&);
    friend std::ostream& operator<<(std::ostream &, Complex const &);
};