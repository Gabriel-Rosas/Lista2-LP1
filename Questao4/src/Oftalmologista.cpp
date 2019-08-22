#include "Oftalmologista.h"

#include <iostream>

Oftalmologista::Oftalmologista(){
    this->altura = 0;
    this->peso = 0;
    this->nome = "";
    this->formacao = "";
}

Oftalmologista::Oftalmologista(std::string nome, std::string formacao, double peso, double altura){
    this->nome = nome;
    this->formacao = formacao;
    this->peso = peso;
    this->altura = altura;
}

Oftalmologista::~Oftalmologista(){

}

void Oftalmologista::exameOftalmologico(){
    std::cout << "Um exame oftalmologico foi realizado com sucesso!" << std::endl;
}

