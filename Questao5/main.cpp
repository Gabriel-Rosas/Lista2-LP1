#include "TesteValidaNumero.h"
#include <string>
#include <iostream>

int main(void) {
	TesteValidaNumero *tNum = new TesteValidaNumero();

	try {
		std::cout << "Numero 77: " << std::endl;
		tNum->validaNumero(77);
		std::cout << "Numero -15: " << std::endl;
		tNum->validaNumero(-15);
		std::cout << "Numero 275: " << std::endl;
		tNum->validaNumero(275);
		std::cout << "Numero 3333: " << std::endl;
		tNum->validaNumero(3333);
	}
	catch (ValorAbaixoException ex) {
		std::cerr << "Exception/Error :" << ex.what() << std::endl;
	}
	catch (ValorAcimaException ex) {
		std::cerr << "Exception/Error : " << ex.what() << std::endl;
	}
	catch (ValorMuitoAcimaException ex) {
		std::cerr << "Exception/Error : " << ex.what() << std::endl;
	}
	catch (...) {
		std::cerr << "Exception/Error" << std::endl;
	}

}
