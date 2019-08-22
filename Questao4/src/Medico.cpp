#include "Medico.h"

Medico::Medico(){
    this->altura = 0;
    this->peso = 0;
    this->nome = "";
    this->formacao = "";
}

Medico::Medico(std::string nome, std::string formacao, double peso, double altura){
    this->nome = nome;
    this->formacao = formacao;
    this->peso = peso;
    this->altura = altura;
}

Medico::~Medico(){

}
