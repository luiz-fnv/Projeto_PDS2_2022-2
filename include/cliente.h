#ifndef CLIENTE_H
#define CLIENTE_H

#include "pessoa.h"
#include "pedido.h"
#include <string>

class Cliente:public Pessoa{
    private:
        std::string _endereco;

    public:
        std::string get_endereco();
        void avaliar_pedido();
        void check_entrega(Pedido entrega);
        Cliente(std::string nome, std::string endereco);
};


#endif