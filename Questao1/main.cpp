#include <iostream>
#include <string>

#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

int main(){
    Triangulo *tri = new Triangulo(3.5, 5, "triangulo");
    Quadrado *qua = new Quadrado(7.5, "quadrado");
    Circulo *cir = new Circulo(9.8, "circulo");

    std::cout << "Nome obj 1: " << tri->getNome() << std::endl;
    std::cout << "Altura: " << tri->getAltura() << " / " << "Base: " << tri->getBase() << std::endl;
    std::cout << "Area triangulo: " << tri->calcularArea(3.5, 5) << std::endl;

    std::cout << "\nNome obj 2: " << qua->getNome() << std::endl;
    std::cout << "Lado: " << qua->getLado() << std::endl;
    std::cout << "Area quadrado: " << qua->calcularArea(7.5) << std::endl;

    std::cout << "\nNome obj 3: " << cir->getNome() << std::endl;
    std::cout << "Raio: " << cir->getRaio() << std::endl;
    std::cout << "Area circulo: " << cir->calcularArea(9.8) << std::endl;

    return 0;
}
