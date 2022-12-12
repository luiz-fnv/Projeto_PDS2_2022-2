#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <string>
using namespace std;


class Pessoa{
    private:
        string _nome;
    public:
        Pessoa(string nome);
        string get_nome();
};


#endif