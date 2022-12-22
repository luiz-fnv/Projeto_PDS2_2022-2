#ifndef CARDAPIO_H
#define CARDAPIO_H

#include <string>
#include <sstream>
#include <vector>
#include <iostream>

#include "produto.h"
#include "restaurante.h"

/// @brief Cardápio do restaurante: Conjunto de produtos 
class Cardapio
{
private:
  /// @brief Vetor de produtos
  std::vector<Produto> _cardapio;

public:

  /// @brief Inicia um cardápio padrão
  void padrao();

  /// @brief Adiciona um produto ao cardápio
  void inserir_produto();

  /// @brief Remove um produto do cardápio
  void remover_produto();

  /// @brief Retorna o cardápio
  /// @return Cardápio
  std::vector<Produto> get_cardapio();

  /// @brief Mostra o cardápio em ordem alfabética
  void mostrar_cardapio_alfabetico();

  /// @brief Ordena e mostra o cardápio pelos mais vendidos
  void mostrar_cardapio_mais_vendidos();

  /// @brief Retorna o número de produtos do cardápio
  /// @return Número de produtos no cardápio
  long unsigned int num_produtos();
  
  /// @brief Retorna os nomes dos produtos
  /// @return // Nomes dos produtos no cardápio
  std::vector<std::string> get_nomes_produtos();
};

#endif