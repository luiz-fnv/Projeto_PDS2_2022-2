#include "cadastro.h"

std::string Cadastro::get_nome(){
  return _nome;
}

std::string Cadastro::get_senha(){
  return _senha;
}

std::string Cadastro::get_cargo_txt(){
  if(_cargo == c_Cliente){
    return "cliente";
  }
  if(_cargo == c_Funcionario){
    return "funcionário";
  }
  if(_cargo == c_Gerente){
    return "gerente";
  }
}

int Cadastro::get_cargo(){
  return _cargo;
}