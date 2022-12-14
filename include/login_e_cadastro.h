#ifndef LOGIN_E_CADASTRO_H
#define LOGIN_E_CADASTRO_H

#include <iostream>
#include "banco_de_dados.h"

Conta login(Banco_de_dados data){
  std::string nome_login;
  std::string senha_login;
  while(1){
    std::cout<< "Bem vindo ao aplicativo oficial do restaurante XXX, digite o número da operação que quiser realizar:\n";
    std::string command;

    std::cin >> command;
    switch(std::stoi(command)){
      case 1:{
        std::string nome_login;
        std::string senha_login;
        int aux = 1;
        std::cout<< "Digite o seu nome:\n";
        std::cin >> nome_login;

        if(data.check_nome_login(nome_login) == 0){
          aux = 0;
        }
        Conta login = data.efetuar_login(nome_login);
        std::cout << "Digite sua senha:\n";
        std::cin >> senha_login;
        if(data.check_senha_login(login, senha_login) == 0){
          aux = 0;
        }

        if(aux = 1){
          std::cout << "Seja bem vindo " << login.get_cargo_txt() << " " << login.get_nome() << ".\n";
          return data.efetuar_login(nome_login);
        }
        std::cout << "Nome e/ou senha incorreto(s).\n";
        break;
      }
      case 2:{
        std::cout << "teste";
        break;
      }
      std::cout << "chegou";
    }
}


#endif