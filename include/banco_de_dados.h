#ifndef BANCO_DE_DADOS_H
#define BANCO_DE_DADOS_H

#include <vector>
#include <iostream>

#include "conta.h"
#include "pedido.h"
#include "cardapio.h"

/// @brief Classe responsável pelo armazenamento de contas, pedidos e produtos
class Banco_de_dados
{
public:
  /// @brief Vetor de pedidos
  std::vector<Pedido> BancoDePedidos;

  /// @brief Vetor de Contas e suas operações
  std::vector<Conta> _BancoDeContas;

  /// @brief Objeto do tipo cardápio
  Cardapio _cardapio;

  /// @brief Insere contas
  /// @param nome Nome do usuário
  /// @param senha Senha atribuída à conta
  /// @param cargo Cargo da pessoa: cliente, funcionário ou gerente
  void inserir_conta(std::string nome, std::string senha, Cargo cargo);

  /// @brief Insere novo pedido
  /// @param novo_pedido Pedido a ser inserido
  void inserir_pedido(Pedido novo_pedido);

  /// @brief Método que cancela pedidos
  /// @param indice Índice do pedido (no vetor) a ser cancelado
  void cancelar_pedido(int indice);

  /// @brief Método para alteração de pedidos
  /// @param indice Índice do pedido (no vetor) a ser alterado
  void alterar_pedido(int indice);

  /// @brief Chama métodos que criam um pedido
  void criar_pedido();

  /// @brief  Mostra o estado dos pedidos
  void mostrar_pedidos();

  /// @brief Retorna o objeto do tipo cardápio
  /// @return Cardápio do Restuarante
  Cardapio get_cardapio(); 

  /// @brief Retorna pedidos feitos
  /// @return Pedidos feitos
  std::vector<Pedido> get_pedidos();
};

#endif