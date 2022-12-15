#ifndef _PESSOA_HPP
#define _PESSOA_HPP

#include <string>

using namespace std;

class Pessoa
{
    public:
        
        Pessoa(const string & n);

        string getNome() const;

        void setNome(const string & n);

    protected:

        string Nome;
    
};

#endif