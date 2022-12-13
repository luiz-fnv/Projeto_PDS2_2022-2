#include "cadastro.h"

std::string Cadastro::get_nome(){
  return _nome;
}

std::string Cadastro::get_senha(){
  return _senha;
}

std::string Cadastro::get_cargo_txt(){
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

int Cadastro::get_cargo(){
  return _cargo;
}