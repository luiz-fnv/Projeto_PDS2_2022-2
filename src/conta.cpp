#include "../include/conta.h"

Conta::Conta(std::string nome, std::string senha, Cargo cargo)
{
  _nome = nome;
  _senha = senha;
  _cargo = cargo;
}

std::string Conta::get_nome() const
{
  return _nome;
}

std::string Conta::get_senha() const
{
  return _senha;
}

std::string Conta::get_cargo_txt() const
{
  switch (_cargo)
  {
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

int Conta::get_cargo() const
{
  return _cargo;
}