#include "produto.h"
#include <cmath>

Produto::Produto(std::string nome, double preco){
  _nome = nome;
  _preco = preco;
  _vendidos = 0;
  _avaliacao = 0;
}

unsigned int Produto::get_vendidos(){
  return _vendidos;
}

double Produto::get_preco(){
  return _preco;
}

std::string Produto::get_nome(){
  return _nome;
}

double Produto::get_avaliacao(){
  double estrelas;
  estrelas = std::ceil(_avaliacao * 100.0)/100.0;
  return estrelas;
}

void Produto::mudar_avaliacao(int nova_avaliacao){
  historico_avaliacoes.push_back(nova_avaliacao);
  for(unsigned int aux = 0; aux < historico_avaliacoes.size(); aux++){
    _avaliacao += historico_avaliacoes.at(aux);
  }
  _avaliacao = _avaliacao/historico_avaliacoes.size();
  return;
}

std::string Produto::descricao_produto(){
  std::stringstream _descricao;
  _descricao << _nome << " - R$" << _preco << " - " << _vendidos << " vendidos - " << _avaliacao << " estrelas.\n";
  std::string descricao = _descricao.str();
  return descricao; 
}