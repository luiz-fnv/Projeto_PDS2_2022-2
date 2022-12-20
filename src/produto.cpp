#include "../include/produto.h"
#include <cmath>

Produto::Produto(std::string nome, double preco)
{
  _nome = nome;
  _preco = preco;
  _vendidos = 0;
  _avaliacao = 0;
}

unsigned int Produto::get_vendidos()
{
  return _vendidos;
}

double Produto::get_preco()
{
  return _preco;
}

std::string Produto::get_nome()
{
  return _nome;
}

double Produto::get_avaliacao()
{
  double estrelas = 0;
  if (historico_avaliacoes.size() != 0)
  {
    for (unsigned int i = 0; i < historico_avaliacoes.size(); i++)
    {
      estrelas += historico_avaliacoes[i];
    }
    estrelas = estrelas / historico_avaliacoes.size();
    _avaliacao = estrelas;
  }
  return estrelas;
}

void Produto::add_avaliacao(int nova_avaliacao)
{
    historico_avaliacoes.push_back(nova_avaliacao);
}

std::string Produto::descricao_produto()
{
  std::stringstream _descricao;
  _descricao << _nome << " - R$" << _preco << " - " << _vendidos << " vendidos - " << _avaliacao << " estrelas.\n";
  std::string descricao = _descricao.str();
  return descricao;
}

double Produto::get_lucro()
{
  double lucro = _preco * _vendidos;
  return lucro;
}