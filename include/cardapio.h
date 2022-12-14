#ifndef CARDAPIO_H
#define CARDAPIO_H

#include <string>
#include <sstream>
#include <vector>
#include <iostream>

#include "produto.h"

class Cardapio{
  private:
    std::vector<Produto> _cardapio;
  public:
    void mostrar_cardapio_alfabetico();
    std::string cardapio_mais_vendidos();
    void inserir_produto();
    void remover_produto();
};

#endif