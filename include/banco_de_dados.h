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
    std::vector<Conta> BancoDeContas;
    std::vector<Pedido> BancoDePedidos;
  public:
    Cardapio _cardapio;

    //operações com Banco de Contas
    bool check_nome_login(std::string nome);
    bool check_senha_login(Conta login, std::string senha);
    Conta efetuar_login(std::string nome);
    void inserir_conta(std::string nome, std::string senha, int cargo);
    //operações com Banco de Pedidos (todas não feitas)
    void inserir_pedido();
    void alterar_pedido();
    void calcular_lucro();
    void calcular_mais_pedido();
    void terminar_dia();
    void mostrar_avaliacoes();

    Cardapio get_cardapio();
    
};

#endif