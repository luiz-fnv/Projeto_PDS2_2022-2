#include "conta.h"
#include "banco_de_dados.h"
#include "login_e_cadastro.h"

int main(){
  Banco_de_dados data;
  data.inserir_conta("Gerente_a","12984",c_Gerente);
  data.inserir_conta("Funcionario_a","42710",c_Funcionario);

  while(1){
    std::cout << "Bem vindo ao sistema eletrônico do restaurante XXX, digite o número correspondente à operação que quiser realizar.\n";
    std::cout << "1 - Fazer login\n";
    std::cout << "2 - Criar conta\n";
    std::cout << "3 - Sair\n";

    int nivel_de_acesso;
    int command;
    std::cin >> command;
    switch(command){
      case 1:
        nivel_de_acesso = login(data);
        break;
      case 2:
        nivel_de_acesso = c_Nenhum;
        cadastrar(data);
        break;
      case 3:
        return 1;
    }
    
    while(nivel_de_acesso != c_Nenhum){
      switch(nivel_de_acesso){
        case c_Cliente:
          //operações cliente
          std::cout << "1 - Sair\n";

          std::cin >> command;
          switch(command){
            case 1:
              nivel_de_acesso = c_Nenhum;
              break;
          }
          break;

        case c_Funcionario:
          //operações funcionario
          std::cout << "1 - Sair\n";

          std::cin >> command;
          switch(command){
            case 1:
              nivel_de_acesso = c_Nenhum;
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
          switch(command){
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
              switch(command){
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
              nivel_de_acesso = c_Nenhum;
              break;
            }
            break;
          }
      }
    }
  }
}