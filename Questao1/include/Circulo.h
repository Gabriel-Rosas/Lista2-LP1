#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica{
    public:
        Circulo(double raio, std::string nome);
        virtual ~Circulo();

        double getRaio();
        void setRaio(double raio);
        double calcularArea(double raio);

    private:
        double raio;
};

#endif // CIRCULO_H
