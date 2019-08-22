#include "Circulo.h"

Circulo::Circulo(double raio, std::string nome){
    setRaio(raio);
    setNome(nome);
}

Circulo::~Circulo(){
    //dtor
}

double Circulo::getRaio(){
    return this->raio;
}

void Circulo::setRaio(double raio){
    this->raio = raio;
}

double Circulo::calcularArea(double raio){
    return 3.14*raio*raio;
}
