#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <string>
#include <exception>

class ValorMuitoAcimaException: public std::exception{
    public:
        ValorMuitoAcimaException()throw();
        virtual ~ValorMuitoAcimaException()throw();
        virtual std::string what();

    protected:
        std::string msgErro = "VALOR MUITO ACIMA DO PERMITIDO";
};

#endif // VALORMUITOACIMAEXCEPTION_H
