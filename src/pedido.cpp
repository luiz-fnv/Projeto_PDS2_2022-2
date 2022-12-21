#include "../include/pedido.h"

Pedido::Pedido(std::vector<Produto> lista_produtos, std::string endereco_pedido)
{
    _lista_produtos = lista_produtos;
    _endereco_pedido = endereco_pedido;
    _estado = preparacao;
    _preco_total = 0;
}

void Pedido::add_prod(Produto prod)
{
    _lista_produtos.push_back(prod);
    atualiza_preco(prod);
}

void Pedido::atualiza_preco(Produto prod)
{
    _preco_total += prod.get_preco();
}

void Pedido::print_descricao_pedido()
{
    for (Produto i : _lista_produtos)
    {
        std::cout << i.descricao_produto();
    }
    std::cout << "Endereço: " << _endereco_pedido << std::endl;
    std::cout << std::endl;
}

std::string Pedido::get_endereco()
{
    return _endereco_pedido;
}

Estado Pedido::get_estado()
{
    return _estado;
    /*std::string desc_estado;
    if (_estado == 0)
    {
        desc_estado = "O pedido está sendo preparado.";
    }
    else if (_estado == 1)
    {
        desc_estado = "O pedido já foi enviado.";
    }
    else if (_estado == 2)
    {
        desc_estado = "O pedido foi concluído";
    }
    else if (_estado == 3)
    {
        desc_estado = "O pedido foi cancelado pelo cliente";
    }
    return desc_estado; */
}

double Pedido::get_preco()
{
    _preco_total = 0;
    for (unsigned int i = 0; i < _lista_produtos.size(); i++)
    {
        _preco_total += _lista_produtos[i].get_preco();
    }
    return _preco_total;
}

std::vector<Produto> Pedido::get_produtos()
{
    return _lista_produtos;
}

void Pedido::mudar_estado(Estado novo)
{
    _estado = novo;
}
