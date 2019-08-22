#include "Quadrado.h"

Quadrado::Quadrado(double lado, std::string nome){
    setLado(lado);
    setNome(nome);
}

Quadrado::~Quadrado(){
    //dtor
}

double Quadrado::getLado(){
    return this->lado;
}

void Quadrado::setLado(double lado){
    this->lado = lado;
}

double Quadrado::calcularArea(double lado){
    return lado*lado;
}
