#include "Conta.h"

Conta::Conta(){
    std::string nome = "";
    double salario = 0;
    int conta = 0;
    double sald = 0;
    double limit = 0;
}

Conta::Conta(std::string nome, double salario, int conta, double sald){
    nomeCliente = nome;
    salarioMensal = salario;
    numeroConta = conta;
    saldo = sald;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

int Conta::getNumeroConta(){
    return numeroConta;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}

void Conta::setNomeCliente(std::string nome){
    nomeCliente = nome;
}

void Conta::setSalarioMensal(double salario){
    salarioMensal = salario;
}

void Conta::setNumeroConta(int conta){
    numeroConta = conta;
}

void Conta::setSaldo(double sald){
    saldo = sald;
}

void Conta::setLimite(double limit){
    limite = limit;
}

void Conta::definirLimite(){
    double limit = 2*getSalarioMensal();
    setLimite(limit);
}

void Conta::sacar(double valor){
    if(valor > saldo){
        throw SaldoNaoDisponivelException();
    }else{
        double sald = getSaldo() - valor;
        setSaldo(sald);
    }
}

void Conta::depositar(double valor){
    double sald = getSaldo() + valor;
    setSaldo(sald);
}
