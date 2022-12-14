#ifndef LOGIN_E_CADASTRO_H
#define LOGIN_E_CADASTRO_H

#include <iostream>
#include "banco_de_dados.h"

bool check_nome_login(std::string nome, Banco_de_dados data){
  for(unsigned int i=0; i != data._BancoDeContas.size(); ++i){
    if (data._BancoDeContas.at(i).get_nome() == nome){
      return 1;
    }
  }
  return 0;
}

bool check_senha_login(Conta login, std::string senha){
  if(login.get_senha()!=senha){
    return 0;
  }
  return 1;
}

Conta efetuar_login(std::string nome, Banco_de_dados data){
  Conta conta;
  for(unsigned int i=0; i != data._BancoDeContas.size(); ++i){
    if (data._BancoDeContas.at(i).get_nome() == nome){
      conta = data._BancoDeContas.at(i);
    }
  }
  return conta;
}


int login(Banco_de_dados data){
  std::string nome_login;
  std::string senha_login;
  int aux;
  Conta login;
  while(1){
    aux = 1;

    std::cout<< "Digite o seu nome de usuário:\n";
    std::cin >> nome_login;

    if(check_nome_login(nome_login, data) == 0){
      aux = 0;
    }

    if(aux != 0){
      login = efetuar_login(nome_login, data);
      std::cout << "Digite sua senha:\n";
      std::cin >> senha_login;
      if(check_senha_login(login, senha_login) == 0){
        aux = 0;
      }
    }

    if(aux == 1){
      std::cout << "Seja bem vindo " << login.get_cargo_txt() << " " << login.get_nome() << ".\n";
      return login.get_cargo();
    }
    
    std::cout << "Nome e/ou senha incorreto(s).\n";
    std::cout << "1 - Tentar novamente.\n";
    std::cout << "2 - Voltar. \n";

    std::string command;
    std::cin >> command;
    switch(std::stoi(command)){
      case 1:{
        break;
      }
      case 2:{
        return c_Nenhum;
      }
    }
  }
}

void cadastrar(Banco_de_dados data){
  //contas novas sempre serão de clientes
  std::string nome_conta; //nome da conta nova
  std::string senha_conta; //senha da conta nova

  std::cout << "Digite o nome de usuário para sua nova conta:\n";
  std::cin >> nome_conta;
  std::cout << "Digite uma senha para sua conta:\n";
  std::cin >> senha_conta;
  data.inserir_conta(nome_conta, senha_conta, c_Cliente);

  std::cout << "Sua conta foi criada com sucesso.\n";
}

#endif