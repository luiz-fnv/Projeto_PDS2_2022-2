#ifndef _PEDIDO_H_
#define _PEDIDO_H_

#include "produto.h"
#include <iostream>

// Enum dos tipos de estado para um pedido
enum Estado
{
  preparacao,
  enviado,
  concluido,
  cancelado
};

class Pedido
{
private:
  // Lista de produtos que compõem o pedido
  std::vector<Produto> _lista_produtos;

  // Estado do pedido
  Estado _estado;

  // Endereço para ser entregue
  std::string _endereco_pedido;

  // Preço total do pedido
  double _preco_total;

public:
  // Construtor do pedido
  Pedido(std::vector<Produto> lista_produtos, std::string endereco_pedido);

  // Adiciona um produto ao pedido
  void add_prod(Produto prod);

  // Atualiza o preço quando um produto é adicionado
  void atualiza_preco(Produto prod);

  // Printa uma descrição, com nome, preço, avaliação e número de vendidos
  void print_descricao_pedido();

  // Retorna o endereço de entrega
  std::string get_endereco();

  // Retorna o estado do pedido
  Estado get_estado();

  // Retorna o preço
  double get_preco();

  // Retorna os produtos presentes no pedido
  std::vector<Produto> get_produtos();

  // Atualiza o estado do pedido
  void mudar_estado(Estado novo);

  // Avalia o pedido feito
  void avalia_pedido(double avaliacao);
};

#endif