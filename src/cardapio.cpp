#include "cardapio.h"

void Cardapio::inserir_produto(Produto produto){
  _cardapio.push_back(produto);
}

void Cardapio::remover_produto(std::string nome_do_produto){
  if(_cardapio.size()==0){
    //printar que esta vazio
    return;
  }
  for(unsigned int i=0; i < _cardapio.size(); ++i){
    if(_cardapio.at(i).get_nome() == nome_do_produto){
      _cardapio.erase(_cardapio.begin()+i);
      //printar que houve sucesso
      return;
    }
  }
  //printar que o nome nao se encontra no cardapio
  return;
}

void Cardapio::mostrar_cardapio_alfabetico(){
  //TODO
}

std::string Cardapio::cardapio_mais_vendidos(){
  if(_cardapio.size()==0){
    return "O cardápio está vazio.\n";
  }

  Cardapio temporario;

  for(unsigned int i=0; i <_cardapio.size(); i++){
    if(temporario._cardapio.size()==0){
      temporario.inserir_produto(_cardapio.at(i));
      continue;
    }
    if(temporario._cardapio.at(i).get_vendidos()<_cardapio.at(i).get_vendidos()){
      temporario._cardapio.insert(temporario._cardapio.begin()+i, _cardapio.at(i));
      continue;
    }
    if(temporario._cardapio.at(i).get_vendidos()==_cardapio.at(i).get_vendidos()){
      if(temporario._cardapio.at(i).get_nome()<_cardapio.at(i).get_nome()){
        temporario._cardapio.insert(temporario._cardapio.begin()+i, _cardapio.at(i));
        continue;
      }
      temporario._cardapio.insert(temporario._cardapio.begin()+i+1, _cardapio.at(i));
      continue;
    }
    temporario._cardapio.insert(temporario._cardapio.end(), _cardapio.at(i));
    continue;
  }

  std::stringstream cardapio_mais_vendidos;

  for(unsigned int i=0; i < _cardapio.size(); i++){
    cardapio_mais_vendidos << temporario._cardapio.at(i).descricao_produto();
  }

  std::string _cardapio_mais_vendidos = cardapio_mais_vendidos.str();
  return _cardapio_mais_vendidos; 
}