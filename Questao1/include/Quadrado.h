#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica{
    public:
        Quadrado(double lado, std::string nome);
        virtual ~Quadrado();

        double getLado();
        void setLado(double lado);
        double calcularArea(double lado);

    private:
        double lado;
};

#endif // QUADRADO_H
