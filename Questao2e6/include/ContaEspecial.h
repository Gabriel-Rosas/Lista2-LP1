#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta{
    public:
        ContaEspecial();
        ContaEspecial(std::string nome, double salario, int conta, double sald);

        void definirLimite();

    protected:

};

#endif // CONTAESPECIAL_H
