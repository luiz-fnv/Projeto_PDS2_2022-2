#include "conta.h"
#include "banco_de_dados.h"
#include "login_e_cadastro.h"

int main()
{
  Banco_de_dados data;

  data.inserir_conta("Gerente_a", "12984", c_Gerente);
  data.inserir_conta("Funcionario_a", "42710", c_Funcionario);

  while (1)
  {
    std::cout << "--------------------------------------------------\n";
    std::cout << "Bem vindo ao sistema eletrônico do restaurante XXX, digite o número correspondente à operação que quiser realizar.\n";
    std::cout << "1 - Fazer login\n";
    std::cout << "2 - Criar conta\n";
    std::cout << "3 - Sair\n";
    std::cout << "--------------------------------------------------\n";

    int nivel_de_acesso;
    int command;

    std::cin >> command;
    std::cin.get();

    switch (command)
    {
    case 1:
      nivel_de_acesso = login(data);
      break;
    case 2:
      nivel_de_acesso = c_Nenhum;
      data = cadastrar(data);
      break;
    case 3:
      exit(EXIT_SUCCESS);
    default:
      break;
    }

    while (nivel_de_acesso != c_Nenhum)
    {
      switch (nivel_de_acesso)
      {
      case c_Cliente:
        std::cout << "--------------------------------------------------\n";
        std::cout << "    O que deseja fazer agora?\n";
        std::cout << "1 - Mostrar produtos do cardápio em ordem alfabética\n";
        std::cout << "2 - Fazer um pedido\n";
        std::cout << "3 - Avaliar um pedido\n";
        std::cout << "4 - Sair\n";
        std::cout << "--------------------------------------------------\n";

        std::cin >> command;
        std::cin.get();
        switch (command)
        {
        case 1:
        {
          data._cardapio.mostrar_cardapio_alfabetico();
          break;
        }
        case 2:
        {
          data.criar_pedido();
          break;
        }
        case 3:
        {
          std::cout << "Esperamos que tenha tido uma boa experiência! Avalie seu pedido com uma nota de 1 a 5" << std::endl;
          // COMO AVALIAR OS PRODUTOS SEPARADAMENTE??
          break;
        }
        case 4:
        {
          nivel_de_acesso = c_Nenhum;
          break;
        }
        default:
          break;
        }
        break;

      case c_Funcionario:
        std::cout << "--------------------------------------------------\n";
        std::cout << "    O que deseja fazer agora?\n";
        std::cout << "1 - Visualizar pedidos\n";
        std::cout << "2 - Alterar situação de um pedido\n";
        std::cout << "3 - Cancelar um pedido\n";
        std::cout << "4 - Sair\n";
        std::cout << "--------------------------------------------------\n";

        std::cin >> command;
        std::cin.get();
        switch (command)
        {
        case 1:
        {
          data.mostrar_pedidos();
          break;
        }
        case 2:
        {
          int num_pedido;
          std::cout << "Digite o número do pedido que será alterado: ";
          std::cin >> num_pedido;
          if (num_pedido != 0)
          {
            num_pedido = num_pedido - 1;
          }
          data.alterar_pedido(num_pedido);
          std::cout << "O estado do pedido " << num_pedido + 1 << " foi alterado com sucesso!\n";
          break;
        }
        case 3:
        {
          int num_pedido;
          std::cout << "Digite o número do pedido a ser cancelado: ";
          std::cin >> num_pedido;
          if (num_pedido != 0)
          {
            num_pedido = num_pedido - 1;
          }
          data.cancelar_pedido(num_pedido);
          std::cout << "O pedido " << num_pedido + 1 << " foi cancelado com sucesso!\n";
          break;
        }
        case 4:
        {
          nivel_de_acesso = c_Nenhum;
          break;
        }
        default:
          break;
        }
        break;

      case c_Gerente:
      {
        command = 0;
        while (command != 4)
        {
          std::cout << "--------------------------------------------------\n";
          std::cout << "O que deseja fazer agora?\n";
          std::cout << "1 - Mostrar finanças\n";
          std::cout << "2 - Mostrar produtos mais vendidos do cardápio\n";
          std::cout << "3 - Alterar cardápio \n";
          std::cout << "4 - Logout\n";
          std::cout << "--------------------------------------------------\n";

          std::cin >> command;
          std::cin.get();

          switch (command)
          {
          case 1:
          {
            // TODO
            break;
          }
          case 2:
          {
            data._cardapio.mostrar_cardapio_mais_vendidos();
            break;
          }
          case 3:
          {
            command = 0;
            while (command != 4)
            {
              std::cout << "--------------------------------------------------\n";
              std::cout << "Alterando o cardápio.\n";
              std::cout << "1 - Mostrar cardápio\n";
              std::cout << "2 - Adicionar produto\n";
              std::cout << "3 - Remover produto\n";
              std::cout << "4 - Voltar\n";
              std::cout << "--------------------------------------------------\n";

              std::cin >> command;
              std::cin.get();

              switch (command)
              {
              case 1:
              {
                data._cardapio.mostrar_cardapio_alfabetico();
                break;
              }
              case 2:
              {
                data._cardapio.inserir_produto();
                break;
              }
              case 3:
              {
                data._cardapio.remover_produto();
                break;
              }
              }
            }
            command = 0;
          }
          }
        }
        nivel_de_acesso = c_Nenhum;
      }
      }
    }
  }
}