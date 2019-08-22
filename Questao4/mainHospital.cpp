#include "Medico.h"
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

#include <iostream>
#include <string>
#include <windows.h>

//std::string nome, std::string formacao, double peso, double altura

int main(){
    Cirurgiao ciru1 = Cirurgiao("Toinho do Tremilique", "Cirurgia geral", 70.4, 1.73);
    Oftalmologista oftal1 = Oftalmologista("Zezinha Caolha", "Oftalmologia", 68.9, 1.81);
    Otorrino otor1 = Otorrino("Manel Lapa de Venta", "Otorrinolaringologia", 100.2, 1.68);
    Ginecologista gine1 = Ginecologista("Maria das Dores", "Ginecologia", 55.9, 1.7);

    ciru1.operacaoCirurgica();
    oftal1.exameOftalmologico();
    otor1.exameOtorrino();
    gine1.exameGinecologico();

    return 0;
}
