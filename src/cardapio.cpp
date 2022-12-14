#include "cardapio.h"

void Cardapio::inserir_produto(){
  std::cout << "Digite o nome do produto a ser adicionado:\n";
  std::string nome_produto_adicionado;
  std::cin >> nome_produto_adicionado;
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
  std::cin >> nome_do_produto;
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

void Cardapio::mostrar_cardapio_alfabetico(){
  //TODO
}

// std::string Cardapio::cardapio_mais_vendidos(){
//   if(_cardapio.size()==0){
//     return "O cardápio está vazio.\n";
//   }

//   Cardapio temporario;

//   for(unsigned int i=0; i <_cardapio.size(); i++){
//     if(temporario._cardapio.size()==0){
//       temporario.inserir_produto(_cardapio.at(i));
//       continue;
//     }
//     if(temporario._cardapio.at(i).get_vendidos()<_cardapio.at(i).get_vendidos()){
//       temporario._cardapio.insert(temporario._cardapio.begin()+i, _cardapio.at(i));
//       continue;
//     }
//     if(temporario._cardapio.at(i).get_vendidos()==_cardapio.at(i).get_vendidos()){
//       if(temporario._cardapio.at(i).get_nome()<_cardapio.at(i).get_nome()){
//         temporario._cardapio.insert(temporario._cardapio.begin()+i, _cardapio.at(i));
//         continue;
//       }
//       temporario._cardapio.insert(temporario._cardapio.begin()+i+1, _cardapio.at(i));
//       continue;
//     }
//     temporario._cardapio.insert(temporario._cardapio.end(), _cardapio.at(i));
//     continue;
//   }

//   std::stringstream cardapio_mais_vendidos;

//   for(unsigned int i=0; i < _cardapio.size(); i++){
//     cardapio_mais_vendidos << temporario._cardapio.at(i).descricao_produto();
//   }

//   std::string _cardapio_mais_vendidos = cardapio_mais_vendidos.str();
//   return _cardapio_mais_vendidos; 
// }