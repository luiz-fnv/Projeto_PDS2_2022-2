#ifndef CARDAPIO_H
#define CARDAPIO_H

#include <string>
#include <sstream>
#include <vector>
#include <iostream>

#include "produto.h"
#include "restaurante.h"

class Cardapio
{
private:
  // Vetor de produtos
  std::vector<Produto> _cardapio;

public:

  // Inicia um cardápio padrão
  void padrao();

  // Adiciona um produto ao cardápio
  void inserir_produto();

  // Remove um produto do cardápio
  void remover_produto();

  // Retorna o cardápio
  std::vector<Produto> get_cardapio();

  // Mostra o cardápio em ordem alfabética
  void mostrar_cardapio_alfabetico();

  // Ordena e mostra o cardápio pelos mais vendidos
  void mostrar_cardapio_mais_vendidos();

  // Retorna o número de produtos do cardápio
  long unsigned int num_produtos();
  
  // Retorna os nomes dos produtos
  std::vector<std::string> get_nomes_produtos();

  
};

#endif