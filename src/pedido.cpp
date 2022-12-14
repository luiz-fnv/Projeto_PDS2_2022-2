#include "pedido.h"

Pedido::Pedido(){
    _estado = "A preparar";
}

std::string Pedido::get_estado(){
    return _estado;
}

void Pedido::atualiza_estado(std::string atualizacao){
    _estado = atualizacao;
    return;
}

void Pedido::cancela_estado(){
    _estado = "Pedido cancelado";
    return;
}

std::vector<std::string> Pedido::get_pedido(){
    return _VetorDeProdutos;
}
