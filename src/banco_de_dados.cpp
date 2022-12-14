#include "banco_de_dados.h"

void Banco_de_dados::inserir_conta(std::string nome, std::string senha, int cargo){
  std::string endereco_conta;
  switch(cargo){
    case c_Cliente:
      std::cout << "Digite o endereço onde quer receber suas entregas:\n";
      std::cin >> endereco_conta; // endereço da nova conta;
      _BancoDeContas.push_back(Cliente(nome,senha,endereco_conta));
      break;
    case c_Funcionario:
      _BancoDeContas.push_back(Funcionario(nome,senha));
      break;
    case c_Gerente:
      _BancoDeContas.push_back(Gerente(nome,senha));
      break;
  }
}

void Banco_de_dados::inserir_pedido(Pedido novo_pedido){
  BancoDePedidos.push_back(novo_pedido);
  return;
}

void Banco_de_dados::alterar_pedido(Pedido pedido_alterado){
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
}

void Banco_de_dados::concluir_pedido(Pedido pedido_concluido){
  std::string concluido = "Pedido concluído";
  pedido_concluido.atualiza_estado(concluido);
}

void Banco_de_dados::cancelar_pedido(Pedido pedido_cancelado){
  auto it = BancoDePedidos.begin();
  bool encontrado = false;
  for(; it != BancoDePedidos.end(); it++)
    if(it->get_pedido() == pedido_cancelado.get_pedido()){
      encontrado = true;
      break;
    }
  if(encontrado == false){
      std::cout << "Pedido não encontrado" << std::endl;
      return;
    }
  it->cancela_estado();
  return;
}

Cardapio Banco_de_dados::get_cardapio(){
  return _cardapio;
}