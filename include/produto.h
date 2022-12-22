#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <sstream>
#include <vector>

/// @brief Classe produto
class Produto
{
private:
  /// @brief Nome do Produto
  std::string _nome;
  
  /// @brief Quantidade de produtos vendidos
  unsigned int _vendidos;

  /// @brief Média das avaliações atribuídas
  double _avaliacao;

  /// @brief Preço do Produto
  double _preco;

  /// @brief Vetor com as avaliações anteriores
  std::vector<int> historico_avaliacoes;

public:
  /// @brief Construtor Padrão
  /// @param nome Nome do produto
  /// @param preco Preço do produto
  Produto(std::string nome, double preco);

  /// @brief Construtor Completo
  /// @param nome Nome do produto
  /// @param preco Preço do produto
  /// @param vendidos Número de produtos vendidos
  /// @param avaliacao Avaliação do produto
  Produto(std::string nome, double preco, unsigned int vendidos, double avaliacao);

  /// @brief Retorna a quantidade de vendidos
  /// @return Quantidade de produtos vendidos
  unsigned int get_vendidos();

  /// @brief Retorna o preço do produto
  /// @return Preço do produto
  double get_preco();

  /// @brief Retorna o nome do produto
  /// @return Nome do produto
  std::string get_nome();

  /// @brief Retorna a média de avaliações do produto
  /// @return Média de avaliações do produto
  double get_avaliacao();

  /// @brief Adiciona uma nova avaliação ao produto
  /// @param nova_avaliacao Nova avaliação a ser inserida
  void add_avaliacao(int nova_avaliacao);

  /// @brief Retorna a descição do produto, composta pelo nome, preço, avaliação e nº de vendas
  /// @return A descrição do produto
  std::string descricao_produto();

  /// @brief Retorna o lucro com a venda do produto
  /// @return Lucro com a venda do produto
  double get_lucro();

  /// @brief Indica que um produto foi vendido e computa essa venda
  void add_venda();
};

#endif