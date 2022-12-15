#ifndef _PESSOAFISICA_HPP
#define _PESSOAFISICA_HPP

#include "Pessoa.hpp"


class PessoaFisica : public Pessoa
{
    public:

        PessoaFisica(const string & n, const string & c);

        string getcpf()const;
        void setcpf(const string & c);

    private:
    
        string cpf;
};

#endif