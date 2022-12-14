#ifndef CARDAPIO_H
#define CARDAPIO_H

#include <string>
#include <sstream>
#include <vector>

#include "produto.h"

class Cardapio{
  private:
    std::vector<Produto> _cardapio;
  public:
    void mostrar_cardapio_alfabetico();
    std::string cardapio_mais_vendidos();
    void inserir_produto(Produto produto);
    void remover_produto(std::string nome_do_produto);
};

#endif