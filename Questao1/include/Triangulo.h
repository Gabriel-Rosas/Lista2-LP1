#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica{
    public:
        Triangulo(double altura, double base, std::string nome);
        virtual ~Triangulo();

        double getAltura();
        double getBase();
        void setAltura(double altura);
        void setBase(double base);

        double calcularArea(double altura, double base);

    private:
        double altura, base;

};

#endif // TRIANGULO_H
