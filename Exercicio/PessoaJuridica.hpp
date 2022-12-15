#ifndef _PESSOAJURIDICA_HPP
#define _PESSOAJURIDICA_HPP

#include "Pessoa.hpp"


class PessoaJuridica: public Pessoa
{
    public:

        PessoaJuridica(const string & n, const string & c, const string & nf);

        string getcnpj()const;
        void setcnpj(const string & c);

        string getNomeFant()const;
        void setNomeFant(const string & nf);

    private:
    
        string cnpj;
        string NomeFant;
};

#endif