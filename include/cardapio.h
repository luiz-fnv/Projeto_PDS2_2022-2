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
    std::vector<Produto> get_cardapio();
    void mostrar_cardapio_alfabetico();
    std::string cardapio_mais_vendidos();
    void inserir_produto();
    void remover_produto();
    long unsigned int num_produtos();
    std::vector<std::string> get_nomes_produtos();
};

#endif