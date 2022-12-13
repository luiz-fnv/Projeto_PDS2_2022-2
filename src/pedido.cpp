#include "pedido.h"

void Pedido::adiciona_pedido(std::vector<Produto> novo_pedido){
    _VetorDeProdutos.push_back(novo_pedido);
}

void Pedido::remove_pedido(std::vector<Produto> pedido_remover){
    
}

std::string Pedido::get_estado(){
    return _estado;
}