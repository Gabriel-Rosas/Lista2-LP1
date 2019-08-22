#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException()throw(){

}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException()throw(){

}

void SaldoNaoDisponivelException::saldoIndisponivel(){

}

std::string SaldoNaoDisponivelException::what(){
    return msgErro;
}
