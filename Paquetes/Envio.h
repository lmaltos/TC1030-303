#pragma once
#include <string>

class Persona {
  public:
    std::string nombre;
    std::string direccion;
    std::string ciudad;
    std::string estado;
    int CP;
    Persona();
    Persona(std::string,std::string,std::string,std::string,int);
};

class Envio {
  protected:
    Persona remitente;
    Persona destinatario;
    int largo;
    int ancho;
  public:
    //Envio(); No utilizaremos el constructor default
    Envio(Persona&,Persona&);
    Envio(std::string,std::string,std::string,std::string,int
    ,std::string,std::string,std::string,std::string,int);
    double calculaCosto();
};