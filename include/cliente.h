#ifndef CLIENTE_H
#define CLIENTE_H

#include "conta.h"
#include "pedido.h"
#include "produto.h"
#include <iostream>

class Cliente : public Conta{
  private:
    std::string _endereco;
  public:
    Cliente(std::string nome, std::string senha, std::string endereco);
    std::string get_endereco();
    void avaliar_pedido(Produto produto);
    void check_entrega(Pedido entrega);
};

#endif