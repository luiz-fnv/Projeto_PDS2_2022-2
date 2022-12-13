#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto{
  private:
    std::string _nome;
    double _lucro;
    double _avaliacao;
    double _preco;
    int _n_vendas;

  public:
    int get_n_vendas();
    double get_preco();
    double get_lucro();
    double get_avaliacao();
    void mudar_avaliacao();
    Produto(std::string nome, double lucro, double avaliacao,
            double preco);
};

#endif