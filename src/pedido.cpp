#include "../include/pedido.h"

Pedido::Pedido(std::vector<Produto> lista_produtos, std::string endereco_pedido){
    _lista_produtos = lista_produtos;
    _endereco_pedido = endereco_pedido;
    }

void Pedido::add_prod(Produto prod){
    _lista_produtos.push_back(prod);
}

void Pedido::print_descricao_pedido(){
    for(Produto i : _lista_produtos){
        std::cout << i.descricao_produto();
    }
}

std::string Pedido::get_endereco(){
    return _endereco_pedido;
}

std::string Pedido::get_estado(){
    std::string desc_estado;
    if(_estado == 0){
        desc_estado = "O pedido está sendo preparado.";
    }else if(_estado == 1){
        desc_estado = "O pedido já foi enviado.";
    }else if(_estado == 2){
        desc_estado = "O pedido foi concluído";
    }else if(_estado == 3){
        desc_estado = "O pedido foi cancelado pelo cliente";
    }
    return desc_estado;
}

double Pedido::get_preco(){
    return _preco_total;
}

void Pedido::mudar_estado(Estado novo){
    _estado = novo;
}
