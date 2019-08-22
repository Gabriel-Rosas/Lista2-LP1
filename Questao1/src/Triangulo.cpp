#include "Triangulo.h"

Triangulo::Triangulo(double altura, double base, std::string nome){
    setAltura(altura);
    setBase(base);
    setNome(nome);
}

Triangulo::~Triangulo(){
    //dtor
}

double Triangulo::getAltura(){
    return this->altura;
}

double Triangulo::getBase(){
    return this->base;
}

void Triangulo::setAltura(double altura){
    this->altura = altura;
}

void Triangulo::setBase(double base){
    this->base = base;
}

double Triangulo::calcularArea(double altura, double base){
    return (base*altura)/2;
}
