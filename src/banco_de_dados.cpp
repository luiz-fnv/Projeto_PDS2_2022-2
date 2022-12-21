#include "../include/banco_de_dados.h"

void Banco_de_dados::inserir_conta(std::string nome, std::string senha, Cargo cargo)
{
  _BancoDeContas.push_back(Conta(nome, senha, cargo));
}

void Banco_de_dados::inserir_pedido(Pedido novo_pedido)
{
  BancoDePedidos.push_back(novo_pedido);
  return;
}

void Banco_de_dados::cancelar_pedido(int indice)
{
  BancoDePedidos.at(indice).mudar_estado(cancelado);
}

void Banco_de_dados::alterar_pedido(int indice)
{
  if (BancoDePedidos.at(indice).get_estado() == enviado)
    BancoDePedidos.at(indice).mudar_estado(concluido);
  if (BancoDePedidos.at(indice).get_estado() == preparacao)
    BancoDePedidos.at(indice).mudar_estado(enviado);
}

void Banco_de_dados::criar_pedido()
{
  std::cout << "Digite os produtos que deseja pedir, um em cada linha. Digite * quando quiser encerrar" << std::endl;
  std::string prods, endereco;
  std::vector<Produto> lista_produtos;
  while (prods != "*")
  {
    std::getline(std::cin, prods);
    for (Produto i : _cardapio.get_cardapio())
    {
      if (prods == i.get_nome())
      {
        i.add_venda();
        lista_produtos.push_back(i);
      }
    }
    if (prods == "*")
    {
      break;
    }
  }
  std::cout << "Informe o endereço onde deseja receber seu pedido:" << std::endl;
  std::getline(std::cin, endereco);
  Pedido pedido = Pedido(lista_produtos, endereco);
  inserir_pedido(pedido);
}

void Banco_de_dados::mostrar_pedidos()
{
  for (unsigned int aux = 0; aux < BancoDePedidos.size(); aux++)
  {
    if (BancoDePedidos[aux].get_estado() == cancelado)
      std::cout << "Pedido " << aux + 1 << ":"
                << "(CANCELADO)" << std::endl;
    if (BancoDePedidos[aux].get_estado() == preparacao)
      std::cout << "Pedido " << aux + 1 << ":"
                << "(EM PREPARO)" << std::endl;
    if (BancoDePedidos[aux].get_estado() == enviado)
      std::cout << "Pedido " << aux + 1 << ":"
                << "(ENVIADO)" << std::endl;
    if (BancoDePedidos[aux].get_estado() == concluido)
      std::cout << "Pedido " << aux + 1 << ":"
                << "(CONCLUÍDO)" << std::endl;
    BancoDePedidos.at(aux).print_descricao_pedido();
  }
}

Cardapio Banco_de_dados::get_cardapio()
{
  return _cardapio;
}

std::vector<Pedido> Banco_de_dados::get_pedidos()
{
  return BancoDePedidos;
}