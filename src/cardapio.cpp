#include "../include/cardapio.h"
#include <algorithm>
#include <iostream>

void Cardapio::padrao()
{

  _cardapio.push_back(Produto("Hambúrguer", 10.00, 10, 4.3));
  _cardapio.push_back(Produto("Pizza", 40.00, 3, 4.2));
  _cardapio.push_back(Produto("Agua", 3.00, 12, 3.9));
  _cardapio.push_back(Produto("Cerveja", 5.00, 20, 4.7));
  _cardapio.push_back(Produto("Batata", 12.00, 12, 4.1));
  _cardapio.push_back(Produto("Lasanha", 30.00, 2, 4.0));
  _cardapio.push_back(Produto("Vinho", 60.00, 1, 5));
  _cardapio.push_back(Produto("Cachorro-Quente", 8.00, 18, 4.6));
  _cardapio.push_back(Produto("Espetinho", 5.00, 30, 4.8));
  _cardapio.push_back(Produto("Porção", 22.00, 9, 4.5));
}

void Cardapio::inserir_produto()
{
  std::string nome_produto_adicionado;
  double preco_produto_adicionado;

  std::cout << "--------------------------------------------------\n";
  std::cout << "Digite o nome do produto a ser adicionado:\n";
  std::getline(std::cin, nome_produto_adicionado);

  std::cout << "Digite o preço do produto a ser adicionado (apenas o valor numérico):\n";
  std::cin >> preco_produto_adicionado;
  std::cin.get();

  _cardapio.push_back(Produto(nome_produto_adicionado, preco_produto_adicionado));
  std::cout << "--------------------------------------------------\n";

  std::cout << "O produto \"" << nome_produto_adicionado << "\" foi adicionado com sucesso.\n";
}

void Cardapio::remover_produto()
{
  std::string nome_do_produto;
  if (_cardapio.size() == 0)
  {
    std::cout << "--------------------------------------------------\n";
    std::cout << "O cardápio está vazio.\n";
    return;
  }

  std::cout << "--------------------------------------------------\n";
  std::cout << "Digite o nome do produto a ser removido:\n";
  std::getline(std::cin, nome_do_produto);

  for (unsigned int i = 0; i < _cardapio.size(); ++i)
  {
    if (_cardapio.at(i).get_nome() == nome_do_produto)
    {
      _cardapio.erase(_cardapio.begin() + i);
      std::cout << "--------------------------------------------------\n";
      std::cout << nome_do_produto << " removido com sucesso.\n";
      return;
    }
  }
  std::cout << "--------------------------------------------------\n";
  std::cout << "Este produto não está no cardápio.\n";
  return;
}

std::vector<Produto> Cardapio::get_cardapio()
{
  return _cardapio;
}

bool sort_nomes(std::string a, std::string b)
{
  return a < b;
}
void Cardapio::mostrar_cardapio_alfabetico()
{
  if (_cardapio.size() == 0)
  {
    std::cout << "--------------------------------------------------\n";
    std::cout << "O cardápio está vazio.\n";
    return;
  }

  Cardapio temporario;
  temporario._cardapio = _cardapio;
  std::vector<std::string> nomes;

  for (unsigned long int i = 0; i < _cardapio.size(); i++)
  {
    nomes.push_back(temporario._cardapio[i].get_nome());
  }
  std::sort(nomes.begin(), nomes.end(), sort_nomes);

  for (unsigned long int i = 0; i < nomes.size(); i++)
  {
    for (auto j = _cardapio.begin(); j != _cardapio.end(); j++)
    {
      if (nomes[i] == (*j).get_nome())
      {
        std::cout << (*j).descricao_produto();
      }
    }
  }
}

bool sort_vendas(unsigned int a, unsigned int b)
{
  return a > b;
}

void Cardapio::mostrar_cardapio_mais_vendidos()
{
  if (_cardapio.size() == 0)
  {
    std::cout << "--------------------------------------------------\n";
    std::cout << "O cardápio está vazio.\n";
    return;
  }

  Cardapio temporario;
  temporario._cardapio = _cardapio;
  std::vector<unsigned int> q_vendidos;

  for (unsigned long int i = 0; i < _cardapio.size(); i++)
  {
    q_vendidos.push_back(temporario._cardapio[i].get_vendidos());
  }
  std::sort(q_vendidos.begin(), q_vendidos.end(), sort_vendas);

  for (unsigned long int i = 0; i < q_vendidos.size(); i++)
  {
    for (auto j = _cardapio.begin(); j != _cardapio.end(); j++)
    {
      if (q_vendidos[i] == (*j).get_vendidos())
      {
        std::cout << (*j).descricao_produto();
      }
    }
  }
}

long unsigned int Cardapio::num_produtos()
{
  return _cardapio.size();
}

std::vector<std::string> Cardapio::get_nomes_produtos()
{
  std::vector<std::string> nomes;
  for (auto i = _cardapio.begin(); i != _cardapio.end(); i++)
  {
    nomes.push_back((*i).get_nome());
  }
  return nomes;
}