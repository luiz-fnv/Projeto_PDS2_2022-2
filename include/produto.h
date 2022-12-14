#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <vector>

class Produto{
  private:
    std::string _nome;
    double _lucro;
    double _avaliacao;
    double _preco;
    int _n_vendas;
    std::vector<int> historico_avaliacoes;

  public:
    int get_n_vendas();
    double get_preco();
    double get_lucro();
    double get_avaliacao();
    void mudar_avaliacao(int nova_avaliacao);
    Produto(std::string nome, double lucro, double avaliacao,
            double preco);
};

#endif