#ifndef MEDICO_H
#define MEDICO_H

#include <string>


class Medico{
    public:
        Medico();
        Medico(std::string nome, std::string formacao, double peso, double altura);
        virtual ~Medico();

    protected:
        std::string nome;
        std::string formacao;
        double peso;
        double altura;
};

#endif // MEDICO_H
