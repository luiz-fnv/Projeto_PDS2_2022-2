#ifndef BANCO_DE_DADOS_H
#define BANCO_DE_DADOS_H

#include <vector>
#include <iostream>

#include "conta.h"
#include "pedido.h"
#include "cardapio.h"

class Banco_de_dados
{
private:
  //vetor de pedidos
  std::vector<Pedido> BancoDePedidos;

public:
  // Vetor de Contas e suas operações
  std::vector<Conta> _BancoDeContas;
  // Insere contas
  void inserir_conta(std::string nome, std::string senha, Cargo cargo);
  // Objeto do tipo cardápio
  Cardapio _cardapio;
  // Insere novo pedido
  void inserir_pedido(Pedido novo_pedido);
  // Método para alteração de pedidos
  void alterar_pedido(int indice);
  // Método que cancela pedidos
  void cancelar_pedido(int indice);
  // Chama métodos que criam um pedido
  void criar_pedido();
  // Retorna pedidos feitos
  std::vector<Pedido> get_pedidos();
  // Retorna o objeto do tipo cardápio
  Cardapio get_cardapio();
  // Mostra o estado dos pedidos
  void mostrar_pedidos();

};

#endif