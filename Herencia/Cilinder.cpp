#include "Cilinder.h"

Cilinder::Cilinder(int x,int y,int r,int _h) 
: Circle(x,y,r) {
    h = _h;
    std::cout << "Constructor Cilinder (" 
    << x << ", " << y 
    << ", " << r 
    << ", " << _h << ")" << std::endl;
}

Cilinder::~Cilinder() {
    std::cout << "Destructor ~Cilinder()" << std::endl;
}

std::string Cilinder::draw() {
    return "Soy un cilindro";
}

double Cilinder::calcularVolumen() {
    return Circle::calcularArea() * h;
}