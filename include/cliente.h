#ifndef CLIENTE_H
#define CLIENTE_H

#include "cadastro.h"
#include "pedido.h"

class Cliente : public Cadastro{
  private:
    std::string _endereco;

  public:
    Cliente(std::string nome, std::string senha, std::string endereco);
    std::string get_endereco();
    void avaliar_pedido();
    void check_entrega(Pedido entrega);
};

#endif