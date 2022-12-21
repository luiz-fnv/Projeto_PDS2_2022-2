#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <sstream>
#include <vector>

class Produto
{
private:
  std::string _nome;
  double _preco;
  std::vector<int> historico_avaliacoes;
  unsigned int _vendidos;
  double _avaliacao;

public:
  Produto(std::string nome, double preco);
  Produto(std::string nome, double preco, unsigned int vendidos, double avaliacao);
  unsigned int get_vendidos();
  void set_avalicao(double nova_avaliacao);
  void set_vendidos(double novo_vendidos);
  std::string get_nome();
  double get_preco();
  double get_lucro();
  double get_avaliacao();
  void add_avaliacao(int nova_avaliacao);
  void add_venda();
  std::string descricao_produto();
};

#endif