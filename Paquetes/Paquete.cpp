#include "Paquete.h"

Paquete::Paquete(Envio env,int _largo,int _ancho,int _profundidad,double _peso,double _costoKg) 
: Envio(env) {
    largo = _largo;
    ancho = _ancho;
    profundidad = _profundidad;
    peso = _peso;
    costoKg = _costoKg;
}

Paquete::Paquete(Persona rem, Persona dest,int _largo,int _ancho,int _profundidad,double _peso,double _costoKg) 
: Envio(rem,dest) {
    largo = _largo;
    ancho = _ancho;
    profundidad = _profundidad;
    peso = _peso;
    costoKg = _costoKg;
}

double Paquete::calculaCosto() {
    return costoKg * peso + Envio::calculaCosto();
}