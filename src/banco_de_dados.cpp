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

Cardapio Banco_de_dados::get_cardapio(){
  return _cardapio;
}