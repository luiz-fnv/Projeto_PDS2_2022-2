#include "../include/banco_de_dados.h"

void Banco_de_dados::inserir_conta(std::string nome, std::string senha, Cargo cargo){
  _BancoDeContas.push_back(Conta(nome,senha,cargo));
}

void Banco_de_dados::inserir_pedido(Pedido novo_pedido){
  BancoDePedidos.push_back(novo_pedido);
  return;
}

/* void Banco_de_dados::alterar_pedido(Pedido pedido_alterado){
  auto it = BancoDePedidos.begin();
  bool encontrado = false;
  for(; it != BancoDePedidos.end(); it++)
    if(it->get_pedido() == pedido_alterado.get_pedido()){
      encontrado = true;
      break;
    }
  if(encontrado == false){
      std::cout << "Pedido não encontrado" << std::endl;
      return;
    }
  std::string atualizacao;
  std::cout << "Digite a nova situação do pedido:" << std::endl;
  std::cin >> atualizacao;
  it->atualiza_estado(atualizacao);
  return;
} */

void Banco_de_dados::concluir_pedido(Pedido pedido_concluido){
  pedido_concluido.mudar_estado(concluido);
}

/* void Banco_de_dados::cancelar_pedido(Pedido pedido_cancelado){
  bool encontrado = false;
  for(auto it = BancoDePedidos.begin(); it != BancoDePedidos.end(); it++)
    if(it->get_produtos() == pedido_cancelado.get_produtos() && it->){
      encontrado = true;
      break;
    }
  if(encontrado == false){
      std::cout << "Pedido não encontrado" << std::endl;
      return;
    }
  it->cancela_estado();
  return;
} */

void Banco_de_dados::cancelar_pedido(Pedido pedido_cancelado){
  pedido_cancelado.mudar_estado(cancelado);
}

void Banco_de_dados::criar_pedido(){
    std::cout << "Digite os produtos que deseja pedir, um em cada linha. Digite * quando quiser encerrar" << std::endl;
    std::string prods, endereco;
    std::vector<Produto> lista_produtos;
    while(prods != "*"){
        std::getline(std::cin, prods);
        for(Produto i : _cardapio.get_cardapio()){
            if(prods == i.get_nome()){
                lista_produtos.push_back(i);
            }
        }
        if(prods == "*"){
            break;
        }
    }
    std::cout << "Informe o endereço onde deseja receber seu pedido:" << std::endl;
    std::getline(std::cin, endereco);
    //std::cin >> endereco;
    Pedido pedido = Pedido(lista_produtos, endereco);
    inserir_pedido(pedido);
}

void Banco_de_dados::mostrar_pedidos(){
  for(unsigned int aux = 0; aux < BancoDePedidos.size(); aux++){
    if(BancoDePedidos[aux].get_estado() == cancelado){
      std::cout << "Pedido " << aux+1 << ":" << "(CANCELADO)" << std::endl;
    }
    else{
      std::cout << "Pedido " << aux+1 << ":" << std::endl;
    }
    BancoDePedidos.at(aux).print_descricao_pedido();
  }
}

Cardapio Banco_de_dados::get_cardapio(){
  return _cardapio;
}

std::vector<Pedido> Banco_de_dados::get_pedidos(){
  return BancoDePedidos;
}