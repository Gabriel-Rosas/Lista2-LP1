#ifndef CONTA_H
#define CONTA_H

#include "SaldoNaoDisponivelException.h"
#include "IConta.h"
#include <string>

class Conta : public IConta{
    public:
        Conta();
        Conta(std::string nome, double salario, int conta, double sald);

        std::string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();

        void setNomeCliente(std::string nome);
        void setSalarioMensal(double salario);
        void setNumeroConta(int conta);
        void setSaldo(double sald);
        void setLimite(double limit);

        void definirLimite();

        void sacar(double valor);
        void depositar(double valor);

    protected:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;

};

#endif // CONTA_H
