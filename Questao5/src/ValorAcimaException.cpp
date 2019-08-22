#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException()throw(){

}

ValorAcimaException::~ValorAcimaException()throw(){

}

std::string ValorAcimaException::what(){
    return msgErro;
}
