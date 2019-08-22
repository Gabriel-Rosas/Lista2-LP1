#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>


class FiguraGeometrica{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();

        std::string getNome();
        void setNome(std::string nome);
        void calcularArea();

    private:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
