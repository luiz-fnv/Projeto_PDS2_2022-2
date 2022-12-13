#ifndef CLIENTE_H
#define CLIENTE_H

#include "pessoa.h"
#include <string>

class Cliente:public Pessoa{
    private:
        std::string endereco;

    public:
        std::string get_endereco();
        void avaliar_pedido();
        void check_entrega();
        Cliente(std::string nome, std::string endereco);
};


#endif