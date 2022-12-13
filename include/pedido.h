#ifndef _PEDIDO_H_
#define _PEDIDO_H_

#include "produto.h"
#include <vector>

class Pedido{
  private:
    std::vector<Produto> _VetorDeProdutos;
    std::string _estado;
  public:
    Pedido();
    void adiciona_pedido(Produto novo_pedido);
    std::string get_estado();
    void atualiza_estado();
};

#endif