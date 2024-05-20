#include "Rectangulo.h"
#include <iostream>

Rectangulo::Rectangulo() {

}

Rectangulo::Rectangulo(double _lado){
    largo = _lado;
    ancho = _lado;
}

Rectangulo::Rectangulo(double _largo, double _ancho){
    largo = _largo;
    ancho = _ancho;
}

Rectangulo::~Rectangulo() {
    std::cout << "Se ha destruido el rectangulo (" << largo << "," << ancho << ")" << std::endl;
}

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