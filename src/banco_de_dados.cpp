#include "banco_de_dados.h"

void Banco_de_dados::inserir_conta(std::string nome, std::string senha, int cargo){
  std::string endereco = "teste";
  switch(cargo){
    case c_Cliente:
      BancoDeContas.push_back(Cliente(nome,senha,endereco));
      break;
    case c_Funcionario:
      BancoDeContas.push_back(Funcionario(nome,senha));
      break;
    case c_Gerente:
      BancoDeContas.push_back(Gerente(nome,senha));
      break;
  }
}

bool Banco_de_dados::check_nome_login(std::string nome){
  for(unsigned int i=0; i != BancoDeContas.size(); ++i){
    if (BancoDeContas.at(i).get_nome() == nome){
      return 1;
    }
  }
  std::cout << "Este nome não foi encontrado no sistema.\n";
  return 0;
}

bool Banco_de_dados::check_senha_login(Conta login, std::string senha){
  if(login.get_senha()!=senha){
    std::cout << "A senha digitada está incorreta.\n";
    return 0;
  }
  return 1;
}

Conta Banco_de_dados::efetuar_login(std::string nome){
  Conta conta;
  for(unsigned int i=0; i != BancoDeContas.size(); ++i){
    if (BancoDeContas.at(i).get_nome() == nome){
      conta = BancoDeContas.at(i);
    }
  }
  return conta;
}

Cardapio Banco_de_dados::get_cardapio(){
  return _cardapio;
}