#pragma once
#include "Envio.h"

class Paquete : public Envio {
  private:
    int profundidad;
    double peso;
    double costoKg;
  public:
    Paquete(Envio,int,int,int,double,double);
    Paquete(Persona,Persona,int,int,int,double,double);
    //Paquete(std::string,std::string,std::string,std::string,int,std::string,std::string,std::string,std::string,int,int,int,int,double,double);
    double calculaCosto();
};