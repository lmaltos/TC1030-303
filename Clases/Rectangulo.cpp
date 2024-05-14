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
    ancho = _ancho;
}

std::string Rectangulo::str() {
    return "Largo = " + std::to_string(largo) + "\nAncho = " + std::to_string(ancho);
}