#include "conta.h"
#include "banco_de_dados.h"
#include "login_e_cadastro.h"

int main(){
  Banco_de_dados data;
  data.inserir_conta("Jorge","123",c_Gerente);
  Conta logada = login(data);

  //operações
  std::string command;
  while(command != "stop"){
    std::cout << "Digite o número da operação que quiser realizar:\n";

    switch(logada.get_cargo()){
      case c_Cliente:
        //operações cliente
        std::cout << "1 - Sair\n";

        std::cin >> command;
        switch(std::stoi(command)){
          case 1:
            command = "stop";
            break;
        }
        break;


      case c_Funcionario:
        //operações funcionario
        std::cout << "1 - Sair\n";

        std::cin >> command;
        switch(std::stoi(command)){
          case 1:
            command = "stop";
            break;
        }
        break;


      case c_Gerente:
        //operações gerente
        std::cout << "1 - Mostrar produtos mais vendidos do cardápio\n";
        std::cout << "2 - Mostrar produtos do cardápio em ordem alfabética\n";
        std::cout << "3 - Alterar cardápio \n";
        std::cout << "4 - Sair\n";

        std::cin >> command;
        switch(std::stoi(command)){
          case 1:{
            // login.mostrar_cardapio_mais_vendidos(data.get_cardapio());
            break;
          }
          case 2:{
            data._cardapio.mostrar_cardapio_alfabetico();
            break;
          }
          case 3:{
            std::cout << "1 - Adicionar Produto\n";
            std::cout << "2 - Remover Produto\n";
            std::cout << "3 - Voltar\n";

            std::cin >> command;
            switch(std::stoi(command)){
              case 1:{
                data._cardapio.inserir_produto();
                break;
              }
              case 2:{
                data._cardapio.remover_produto();
                break;
              }
              case 3:{
                break;
              }
            }
            break;
          }
          case 4:{
            command = "stop";
            break;
          }
          break;
        }
    }
  }
}