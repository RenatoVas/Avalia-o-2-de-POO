#include "Cliente.hpp"

Cliente::Cliente(const string & n, const string & c,const string & t, const string & e)
        :PessoaFisica(n, c)
{
    setTelefone(t);
    setEndereço(e);
}

string Cliente::getEndereço() const
{
    return Endereço;
}

string Cliente::getTelefone() const
{
    return Telefone;
}

void Cliente::setTelefone(const string t)
{
    setTelefone = t;
}
void Cliente::setEndereço(const string e)
{
    setEndereço = e;
}