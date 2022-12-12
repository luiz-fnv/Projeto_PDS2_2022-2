#ifndef _PEDIDO_H_
#define _PEDIDO_H_

#include "produto.h"
#include <vector>

class Pedido{
    private:
        std::vector<std::vector<Produto>> _listapedidos;
    public:
        Pedido(std::vector<std::vector<Produto>> listapedidos);
        void adiciona_pedido(std::vector<Produto> novo_pedido);
        void remove_pedido(std::vector<Produto> pedido_remover);
};

#endif