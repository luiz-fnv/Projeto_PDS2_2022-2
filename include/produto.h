#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <sstream>
#include <vector>

class Produto
{
private:
  // Nome do Produto
  std::string _nome;
  
  // Preço do Produto
  double _preco;

  // Vetor com as avaliações anteriores
  std::vector<int> historico_avaliacoes;

  // Quantidade de produtos vendidos
  unsigned int _vendidos;

  // Média das avaliações atribuídas
  double _avaliacao;

public:

  // Construtor Padrão
  Produto(std::string nome, double preco);

  // Construtor Completo
  Produto(std::string nome, double preco, unsigned int vendidos, double avaliacao);

  // Retorna a quantidade de vendidos
  unsigned int get_vendidos();

  // Retorna o preço do produto
  double get_preco();

  // Retorna o nome do produto
  std::string get_nome();

  // Retorna a média de avaliações do produto
  double get_avaliacao();

  // Adiciona uma nova avaliação ao produto
  void add_avaliacao(int nova_avaliacao);

  // Retorna a descição do produto, composta pelo nome, preço, avaliação e nº de vendas
  std::string descricao_produto();

  // Retorna o lucro com a venda do produto
  double get_lucro();

  // Indica que um produto foi vendido e computa essa venda
  void add_venda();
};

#endif