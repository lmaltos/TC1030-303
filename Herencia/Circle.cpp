#include "Circle.h"
#include "Shape.h" // Esta incluida en Circle.h
#include <iostream> // esta incluida en Shape.h
namespace herencia {

Circle::Circle() : Shape() {
    std::cout << "Constructor Cicle ()" << std::endl;
    r = 1;
}

Circle::Circle(int _x, int _y, int _r) : Shape(_x,_y) {
    std::cout << "Constructor Cicle (" 
    << _x << ", " << _y 
    << ", " << _r << ")" << std::endl;
    r = _r;
}

Circle::~Circle(){
    std::cout << "Destructor ~Cicle()" << std::endl;
}

std::string Circle::draw() {
    return "Soy un circulo";
}
}