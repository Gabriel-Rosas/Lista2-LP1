#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException() throw(){

}

ValorAbaixoException::~ValorAbaixoException() throw(){

}

std::string ValorAbaixoException::what(){
    return msgErro;
}
