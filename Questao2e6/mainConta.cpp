#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"
#include <iostream>
#include <string>

int main(){
    //std::string nome, double salario, int conta, double sald
    Conta *comum = new Conta("Gabriel", 750.50, 123, 5200);
    ContaEspecial *especial = new ContaEspecial("Rosas", 9600, 321, 15200);

    std::cout << "Usuario conta comum: " << comum->getNomeCliente() << std::endl;
    std::cout << "Salario: " << comum->getSalarioMensal() << std::endl;
    std::cout << "Numero da conta: " << comum->getNumeroConta() << std::endl;
    std::cout << "Saldo: " << comum->getSaldo() << std::endl;
    std::cout << "SAQUE" << std::endl;
    try{
        std::cout << "Valor a ser sacado: 500" << std::endl;
        comum->sacar(500);
        std::cout << "Saldo atual: " << comum->getSaldo() << std::endl;
        std::cout << "Valor a ser sacado: 5300" << std::endl;
        comum->sacar(5300);
        std::cout << "Saldo atual: " << comum->getSaldo() << std::endl;
    }
    catch(SaldoNaoDisponivelException ex){
        std::cerr << "Exception/Erro: " << ex.what() << std::endl;
    }
    catch(...){
        std::cerr << "Exception/Erro" << std::endl;
    }

    std::cout << "Usuario conta especial: " << especial->getNomeCliente() << std::endl;
    std::cout << "Salario: " << especial->getSalarioMensal() << std::endl;
    std::cout << "Numero da conta: " << especial->getNumeroConta() << std::endl;
    std::cout << "Saldo: " << especial->getSaldo() << std::endl;
    std::cout << "SAQUE" << std::endl;
    try{
        std::cout << "Valor a ser sacado: 500" << std::endl;
        especial->sacar(1500);
        std::cout << "Saldo atual: " << especial->getSaldo() << std::endl;
        std::cout << "Valor a ser sacado: 5300" << std::endl;
        especial->sacar(15300);
        std::cout << "Saldo atual: " << especial->getSaldo() << std::endl;
    }
    catch(SaldoNaoDisponivelException ex){
        std::cerr << "Exception/Erro: " << ex.what() << std::endl;
    }
    catch(...){
        std::cerr << "Exception/Erro" << std::endl;
    }

    return 0;
}
