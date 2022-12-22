#ifndef _PEDIDO_H_
#define _PEDIDO_H_

#include "produto.h"
#include <iostream>

/// @brief Enum dos tipos de estado para um pedido
enum Estado
{
  preparacao,
  enviado,
  concluido,
  cancelado
};

/// @brief Classe responsável pela criação de pedidos e atividades relacionadas
class Pedido
{
private:
  /// @brief Lista de produtos que compõem o pedido
  std::vector<Produto> _lista_produtos;

  /// @brief Estado do pedido
  Estado _estado;

  /// @brief Endereço para ser entregue
  std::string _endereco_pedido;

  /// @brief Preço total do pedido
  double _preco_total;

public:
  /// @brief Construtor do pedido
  /// @param lista_produtos Lista de produtos que compõem o pedido
  /// @param endereco_pedido Endereço para ser entregue
  Pedido(std::vector<Produto> lista_produtos, std::string endereco_pedido);

  /// @brief Retorna o endereço de entrega
  /// @return Endereço de entrega
  std::string get_endereco();

  /// @brief Retorna o estado do pedido
  /// @return Enum do estado do produto
  Estado get_estado();

  /// @brief Retorna o preço
  /// @return Preço total do pedido
  double get_preco();

  /// @brief Atualiza o estado do pedido
  /// @param novo Novo estado do pedido
  void mudar_estado(Estado novo);

  /// @brief Retorna os produtos presentes no pedido
  /// @return Vetor de produtos presentes no pedido
  std::vector<Produto> get_produtos();

  /// @brief Avalia o pedido feito
  /// @param avaliacao A nova avaliação a ser adicionada
  void avalia_pedido(double avaliacao);

  /// @brief Printa uma descrição, com nome, preço, avaliação e número de vendidos
  void print_descricao_pedido();

  /// @brief Adiciona um produto ao pedido
  /// @param prod Produto a ser adicionado
  void add_prod(Produto prod);

  /// @brief Atualiza o preço quando um produto é adicionado
  void atualiza_preco(Produto prod);
};

#endif