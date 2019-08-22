#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <string>
#include <exception>

class ValorAbaixoException: public std::exception{
    public:
        ValorAbaixoException() throw();
        virtual ~ValorAbaixoException() throw();
        virtual std::string what();

    protected:
        std::string msgErro = "VALOR ABAIXO DO PERMITIDO";
};

#endif // VALORABAIXOEXCEPTION_H
