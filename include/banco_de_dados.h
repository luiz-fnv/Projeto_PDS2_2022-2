#ifndef BANCO_DE_DADOS_H
#define BANCO_DE_DADOS_H

#include <vector>
#include <iostream>

#include "cadastro.h"
#include "cliente.h"
#include "funcionario.h"
#include "gerente.h"

#include "pedido.h"
#include "cardapio.h"


class Banco_de_dados{
  private:
    std::vector<Cadastro> BancoDeCadastros;
    std::vector<Pedido> BancoDePedidos;
  public:
    Cardapio _cardapio;
    
    //operações com Banco de Cadastros
    bool check_nome_login(std::string nome);
    bool check_senha_login(Cadastro login, std::string senha);
    Cadastro efetuar_login(std::string nome);
    void inserir_cadastro(std::string nome, std::string senha, int cargo);
    //operações com Banco de Pedidos (todas não feitas)
    void inserir_pedido(Pedido novo_pedido);
    void alterar_pedido(Pedido pedido_alterado);
    void concluir_pedido(Pedido pedido_concluido);
    void cancelar_pedido(Pedido pedido_cancelado);
    void calcular_lucro();
    void calcular_mais_pedido();
    void terminar_dia();
    void mostrar_avaliacoes();

    Cardapio get_cardapio();
    
};

#endif