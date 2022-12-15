#ifndef _CLIENTE_HPP
#define _CLIENTE_HPP

#include "PessoaFisica.hpp"
#include <iostream>

class Cliente : public PessoaFisica
{

    public:

        Cliente(const string & n, const string & c,const string & t, const string & e);

        string getEndereço() const;
        string getTelefone() const;

        void setTelefone(const string t);
        void setEndereço(const string e);

    private:

        string Telefone;
        string Endereço;

};

#endif