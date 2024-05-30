#include "Shape.h"

namespace herencia {
    
Shape::Shape() {
    std::cout << "Constructor Shape ()" << std::endl;
    x = 0;
    y = 0;
}

Shape::Shape(int valX, int valY) {
    std::cout << "Constructor Shape (" << valX << ", " << valY << ")" << std::endl;
    x = valX;
    y = valY;
}

Shape::~Shape() {
    std::cout << "Destructor de ~Shape()" << std::endl;
}

/* Se volvio virtual = 0
std::string Shape::draw() {
    return "Soy una figura";
}*/

int Shape::getValueX() {
    return x;
}

int Shape::getValueY() {
    return y;
}

}