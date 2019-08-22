#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include "Medico.h"

class Ginecologista : public Medico{
    public:
        Ginecologista();
        Ginecologista(std::string nome, std::string formacao, double peso, double altura);
        virtual ~Ginecologista();

        void exameGinecologico();
};

#endif // GINECOLOGISTA_H
