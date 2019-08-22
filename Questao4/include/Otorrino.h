#ifndef OTORRINO_H
#define OTORRINO_H

#include "Medico.h"


class Otorrino : public Medico{
    public:
        Otorrino();
        Otorrino(std::string nome, std::string formacao, double peso, double altura);
        virtual ~Otorrino();

        void exameOtorrino();
};

#endif // OTORRINO_H
