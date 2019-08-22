#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include "Medico.h"

class Cirurgiao : public Medico{
    public:
        Cirurgiao();
        Cirurgiao(std::string nome, std::string formacao, double peso, double altura);
        virtual ~Cirurgiao();

        void operacaoCirurgica();
};

#endif // CIRURGIAO_H
