#ifndef _PEDIDO_H_
#define _PEDIDO_H_

#include "produto.h"
#include <iostream>

enum Estado{
  preparacao,
  enviado,
  concluido,
  cancelado
};

class Pedido{
  private:
    std::vector<Produto> _lista_produtos;
    Estado _estado;
    std::string _endereco_pedido;
    double _preco_total;
  public:
    Pedido(std::vector<Produto> lista_produtos, std::string endereco_pedido);
    void atualiza_preco(Produto prod);
    void add_prod(Produto prod);
    void print_descricao_pedido();
    double get_preco();
    std::string get_endereco();
    Estado get_estado();
    std::vector<Produto> get_produtos();
    void mudar_estado(Estado novo);
};

#endif