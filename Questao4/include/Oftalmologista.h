#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H

#include "Medico.h"

class Oftalmologista : public Medico{
    public:
        Oftalmologista();
        Oftalmologista(std::string nome, std::string formacao, double peso, double altura);
        virtual ~Oftalmologista();

        void exameOftalmologico();
};

#endif // OFTALMOLOGISTA_H
