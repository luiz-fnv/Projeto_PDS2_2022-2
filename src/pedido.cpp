#include "pedido.h"

Pedido::Pedido(){
    _estado = "A preparar";
}

void Pedido::adiciona_pedido(Produto novo_pedido){
    _VetorDeProdutos.push_back(novo_pedido);
    return;
}

std::string Pedido::get_estado(){
    return _estado;
}

void Pedido::atualiza_estado(){
    std::string atualizacao;
    cin >> atualizacao;
    _estado = atualizacao;
    return;
}