#ifndef _PEDIDO_H_
#define _PEDIDO_H_

#include "produto.h"
#include <iostream>

class Pedido{
  private:
    std::vector<std::string> _VetorDeProdutos;
    std::string _estado;
  public:
    Pedido();
    std::string get_estado();
    void atualiza_estado(std::string atualizacao);
    void cancela_estado();
    void mostrar_produtos_pedido();
    std::vector<std::string> get_pedido();
};

#endif