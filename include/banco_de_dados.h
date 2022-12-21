#ifndef BANCO_DE_DADOS_H
#define BANCO_DE_DADOS_H

#include <vector>
#include <iostream>

#include "conta.h"
#include "pedido.h"
#include "cardapio.h"


class Banco_de_dados{
  private:
    std::vector<Pedido> BancoDePedidos;
  public:
    //Vetor de Contas e suas operações
    std::vector<Conta> _BancoDeContas;
    void inserir_conta(std::string nome, std::string senha, Cargo cargo);

    Cardapio _cardapio;
    //operações com Banco de Pedidos (todas não feitas)
    void inserir_pedido(Pedido novo_pedido);
    void alterar_pedido(int indice);
    //void concluir_pedido(Pedido pedido_concluido);
    void cancelar_pedido(int indice);
    void criar_pedido();
    void calcular_lucro();
    void calcular_mais_pedido();
    void terminar_dia();
    void mostrar_pedidos();
    void mostrar_avaliacoes();
    std::vector<Pedido> get_pedidos();

    Cardapio get_cardapio();
    
};

#endif