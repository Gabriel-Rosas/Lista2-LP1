#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <string>
#include <exception>

class ValorAcimaException: public std::exception{
    public:
        ValorAcimaException() throw();
        virtual ~ValorAcimaException() throw();
        virtual std::string what();

    protected:
        std::string msgErro = "VALOR ACIMA DO PERMITIDO";
};

#endif // VALORACIMAEXCEPTION_H
