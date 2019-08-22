#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException()throw(){

}

ValorMuitoAcimaException::~ValorMuitoAcimaException()throw(){

}

std::string ValorMuitoAcimaException::what(){
    return msgErro;
}
