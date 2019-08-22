#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){
    //ctor
}

FiguraGeometrica::~FiguraGeometrica(){
    //dtor
}

void FiguraGeometrica::calcularArea(){

}

std::string FiguraGeometrica::getNome(){
    return this->nome;
}

void FiguraGeometrica::setNome(std::string nome){
    this->nome = nome;
}
