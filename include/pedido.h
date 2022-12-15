#ifndef _PEDIDO_H_
#define _PEDIDO_H_

#include "produto.h"
#include <iostream>
#include "banco_de_dados.h"

class Pedido{
  private:
    std::vector<std::string> _VetorDeProdutos;
    std::string _estado;
  public:
    Pedido();
    std::string get_estado();
    void criar_pedido(Banco_de_dados banco);
    void add_produto_lista(std::string adicionar);
    void atualiza_estado(std::string atualizacao);
    void cancela_estado();
    void mostra_produtos_pedido();
    std::vector<std::string> get_pedido();
};

#endif