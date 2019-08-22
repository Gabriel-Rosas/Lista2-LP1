#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){

}

ContaEspecial::ContaEspecial(std::string nome, double salario, int conta, double sald){
    nomeCliente = nome;
    salarioMensal = salario;
    numeroConta = conta;
    saldo = sald;
}

void ContaEspecial::definirLimite(){
    double limit = 3*getSalarioMensal();
    setLimite(limit);
}
