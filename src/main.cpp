#include "cadastro.h"
#include "banco_de_dados.h"
#include <iostream>

int main(){
  Banco_de_dados data;
  Cadastro login;

  data.inserir_cadastro("Jorge","123",2);

  //login
  std::string nome_login;
  std::string senha_login;

  std::cout<< "Bem vindo ao aplicativo oficial do restaurante XXX, por favor efetue o seu login.\n";
  std::cout<< "Digite o seu nome:\n";
  std::cin >> nome_login;

  if(data.check_nome_login(nome_login) == 0){
    return 0;
  }
  login = data.efetuar_login(nome_login);
  std::cout << "Digite sua senha:\n";
  std::cin >> senha_login;

  if(data.check_senha_login(login, senha_login) == 0){
    return 0;
  }
  std::cout << "Seja bem vindo " << login.get_cargo_txt() << " " << login.get_nome() << ".\n";

  //operações
  // std::string command;
  // while(command!="stop"){
  // }
}