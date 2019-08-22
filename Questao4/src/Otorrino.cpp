#include "Otorrino.h"
#include <iostream>

Otorrino::Otorrino(){
    this->altura = 0;
    this->peso = 0;
    this->nome = "";
    this->formacao = "";
}

Otorrino::Otorrino(std::string nome, std::string formacao, double peso, double altura){
    this->nome = nome;
    this->formacao = formacao;
    this->peso = peso;
    this->altura = altura;
}

Otorrino::~Otorrino(){

}

void Otorrino::exameOtorrino(){
    std::cout << "Um exame otorrino foi realizado com sucesso!" << std::endl;
}
