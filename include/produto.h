#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <sstream>
#include <vector>

class Produto{
  private:
    std::string _nome;
    double _preco;
    unsigned int _vendidos;
    std::vector<int> historico_avaliacoes;
    double _avaliacao;

  public:
    Produto(std::string nome, double preco);
    unsigned int get_vendidos();
    std::string get_nome();
    double get_preco();
    double get_lucro();
    double get_avaliacao();
    void add_avaliacao(int nova_avaliacao);
    std::string descricao_produto();
};

#endif