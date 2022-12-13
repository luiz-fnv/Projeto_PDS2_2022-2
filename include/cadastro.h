#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>

class Cadastro{
    protected:
        std::string _nome;
        std::string _senha;

        enum Cargo{
            c_Cliente,
            c_Funcionario,
            c_Gerente
        };
        Cadastro::Cargo _cargo;

    public:
        std::string get_nome();
};


#endif