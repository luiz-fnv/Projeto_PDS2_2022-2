#include "../include/cardapio.h"
#include <algorithm>
#include <iostream>

void Cardapio::inserir_produto(){
  std::cout << "Digite o nome do produto a ser adicionado:\n";
  std::string nome_produto_adicionado;
  std::getline(std::cin,nome_produto_adicionado);
  std::cout << "Digite o preco do produto a ser adicionado:\n";
  double preco_produto_adicionado;
  std::cin >> preco_produto_adicionado;
  _cardapio.push_back(Produto(nome_produto_adicionado,preco_produto_adicionado));
  std::cout << nome_produto_adicionado << " adicionado com sucesso.\n";
}

void Cardapio::remover_produto(){
  if(_cardapio.size()==0){
    std::cout << "O cardápio está vazio.\n";
    return;
  }
  std::cout << "Digite o nome do produto a ser removido:\n";
  std::string nome_do_produto;
  std::getline(std::cin,nome_do_produto);
  for(unsigned int i=0; i < _cardapio.size(); ++i){
    if(_cardapio.at(i).get_nome() == nome_do_produto){
      _cardapio.erase(_cardapio.begin()+i);
      std::cout << nome_do_produto << " removido com sucesso.\n";
      return;
    }
  }
  std::cout << "Este produto não está no cardápio.\n";
  return;
}

std::vector<Produto> Cardapio::get_cardapio(){
  return _cardapio;
}

bool sort_nomes(std::string a, std::string b){
  return a<b;
}

void Cardapio::mostrar_cardapio_alfabetico(){
  Cardapio temporario;
  temporario._cardapio = _cardapio;
  std::vector<std::string> nomes;
  for(unsigned long int i = 0; i < _cardapio.size(); i++){
    nomes.push_back(temporario._cardapio[i].get_nome());
  }
  std::sort(nomes.begin(), nomes.end(), sort_nomes);
  for(unsigned long int i = 0; i < nomes.size(); i++){
    //std::cout << nomes[i] << std::endl;
    for(auto j = _cardapio.begin(); j != _cardapio.end(); j++){
      if(nomes[i] == (*j).get_nome()){
        std::cout << (*j).descricao_produto();
      }
    }
  }
}

long unsigned int Cardapio::num_produtos(){
  return _cardapio.size();
}

std::vector<std::string> Cardapio::get_nomes_produtos(){
  std::vector<std::string> nomes;
  for(auto i = _cardapio.begin(); i != _cardapio.end(); i++){
    nomes.push_back((*i).get_nome());
  }
  return nomes;
}