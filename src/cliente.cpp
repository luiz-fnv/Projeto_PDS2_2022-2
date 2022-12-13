#include "cliente.h"
#include <iostream>

Cliente::Cliente(std::string nome, std::string senha, std::string endereco){
    _nome = nome;
    _senha = senha;
    _endereco = endereco;
    _cargo = c_Cliente;
}

std::string Cliente::get_endereco(){
    return _endereco;
}

void Cliente::avaliar_pedido(){
    int avaliacao;
    std::cout << "Avalie seu pedido com uma nota de 1 a 5:"<< std::endl;
    std::cin >> avaliacao;
    return;
}

void Cliente::check_entrega(Pedido entrega){
    std::cout << entrega.get_estado() << std::endl;
    return;
}