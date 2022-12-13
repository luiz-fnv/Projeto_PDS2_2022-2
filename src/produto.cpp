#include "produto.h"
#include <cmath>

Produto::Produto(std::string nome, double lucro, double avaliacao,
                double preco){
                    _nome = nome;
                    _lucro = lucro;
                    _avaliacao = avaliacao;
                    _preco = preco;
                    _n_vendas = 0;
                }

int Produto::get_n_vendas(){
  return _n_vendas;
}

double Produto::get_preco(){
  return _preco;
}

double Produto::get_lucro(){
  return _lucro;
}

double Produto::get_avaliacao(){
  double estrelas;
  estrelas = std::ceil(_avaliacao * 100.0)/100.0;
  return estrelas;
}