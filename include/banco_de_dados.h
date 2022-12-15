#ifndef BANCO_DE_DADOS_H
#define BANCO_DE_DADOS_H

#include <vector>
#include <iostream>

#include "conta.h"
#include "cliente.h"
#include "funcionario.h"
#include "gerente.h"
#include "pedido.h"
#include "cardapio.h"


class Banco_de_dados{
  private:
    std::vector<Pedido> BancoDePedidos;
  public:
    //Vetor de Contas e suas operações
    std::vector<Conta> _BancoDeContas;
    void inserir_conta(std::string nome, std::string senha, int cargo);

    Cardapio _cardapio;
    //operações com Banco de Pedidos (todas não feitas)
    void inserir_pedido(Pedido novo_pedido);
    void alterar_pedido(Pedido pedido_alterado);
    void concluir_pedido(Pedido pedido_concluido);
    void cancelar_pedido(Pedido pedido_cancelado);
    void calcular_lucro();
    void calcular_mais_pedido();
    void terminar_dia();
    void mostrar_pedidos();
    void mostrar_avaliacoes();

    Cardapio get_cardapio();
    
};

#endif