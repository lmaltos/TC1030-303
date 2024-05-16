#include "Rectangulo.h"

double Rectangulo::calcularArea() {
    return largo * ancho;
}

void Rectangulo::setLargo(double _largo) {
    //Rectangulo::largo = _largo;
    //this->largo = _largo;
    largo = _largo;
}

void Rectangulo::setAncho(double _ancho) {
    if (_ancho > 0) {
        ancho = _ancho;
    }
    else {
        ancho = 1;
    }
}

double Rectangulo::getLargo() {
    return largo;
}
double Rectangulo::getAncho() {
    return ancho;
}

std::string Rectangulo::str() {
    return "Largo = " + std::to_string(largo) + "\nAncho = " + std::to_string(ancho);
}