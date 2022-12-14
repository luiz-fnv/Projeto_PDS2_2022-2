#include "banco_de_dados.h"

void Banco_de_dados::inserir_cadastro(std::string nome, std::string senha, int cargo){
  std::string endereco = "teste";
  switch(cargo){
    case c_Cliente:
      BancoDeCadastros.push_back(Cliente(nome,senha,endereco));
      break;
    case c_Funcionario:
      BancoDeCadastros.push_back(Funcionario(nome,senha));
      break;
    case c_Gerente:
      BancoDeCadastros.push_back(Gerente(nome,senha));
      break;
  }
}

bool Banco_de_dados::check_nome_login(std::string nome){
  for(unsigned int i=0; i != BancoDeCadastros.size(); ++i){
    if (BancoDeCadastros.at(i).get_nome() == nome){
      return 1;
    }
  }
  std::cout << "Este nome não foi encontrado no sistema.\n";
  return 0;
}

bool Banco_de_dados::check_senha_login(Cadastro login, std::string senha){
  if(login.get_senha()!=senha){
    std::cout << "A senha digitada está incorreta.\n";
    return 0;
  }
  return 1;
}

Cadastro Banco_de_dados::efetuar_login(std::string nome){
  Cadastro cadastro;
  for(unsigned int i=0; i != BancoDeCadastros.size(); ++i){
    if (BancoDeCadastros.at(i).get_nome() == nome){
      cadastro = BancoDeCadastros.at(i);
    }
  }
  return cadastro;
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