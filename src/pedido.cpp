#include "pedido.h"

Pedido::Pedido(){
    _estado = "A preparar";
}

std::string Pedido::get_estado(){
    return _estado;
}

void Pedido::add_produto_lista(std::string adicionar){
    _VetorDeProdutos.push_back(adicionar);
}

void Pedido::atualiza_estado(std::string atualizacao){
    _estado = atualizacao;
    return;
}

void Pedido::cancela_estado(){
    _estado = "Pedido cancelado";
    return;
}

void Pedido::mostrar_produtos_pedido(){
    for(unsigned int aux = 0; aux < _VetorDeProdutos.size(); aux++)
        std::cout << _VetorDeProdutos.at(aux) << std::endl;
    return;
}

std::vector<std::string> Pedido::get_pedido(){
    std::vector<std::string> produtos;
    produtos = _VetorDeProdutos;
    return produtos;
}