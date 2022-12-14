#include "cadastro.h"

std::string Cadastro::get_nome() const{
  return _nome;
}

std::string Cadastro::get_senha() const{
  return _senha;
}

std::string Cadastro::get_cargo_txt() const{
  switch(_cargo){
    case c_Cliente:
      return "cliente";
    case c_Funcionario:
      return "funcionário";
    case c_Gerente:
      return "gerente";
    default:
      return " ";
  }
}

int Cadastro::get_cargo() const{
  return _cargo;
}

void Cadastro::mostrar_cardapio_mais_vendidos(Cardapio cardapio) const{
  std::cout << "Lista dos produtos do cardápio ordenados pelo número de vendas:\n";
  std::cout << cardapio.cardapio_mais_vendidos();
}