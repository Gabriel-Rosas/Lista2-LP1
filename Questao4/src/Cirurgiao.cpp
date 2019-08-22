#include "Cirurgiao.h"
#include <iostream>

Cirurgiao::Cirurgiao(){
    this->altura = 0;
    this->peso = 0;
    this->nome = "";
    this->formacao = "";
}

Cirurgiao::Cirurgiao(std::string nome, std::string formacao, double peso, double altura){
    this->nome = nome;
    this->formacao = formacao;
    this->peso = peso;
    this->altura = altura;
}

Cirurgiao::~Cirurgiao(){

}

void Cirurgiao::operacaoCirurgica(){
    std::cout << "Uma operacao cirurgica foi realizada com sucesso!" << std::endl;
}
