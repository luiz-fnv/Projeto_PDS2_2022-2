#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>
#include "cardapio.h"

// Enum de possíveis cargos
enum Cargo
{
  c_Cliente,
  c_Funcionario,
  c_Gerente,
  c_Nenhum
};

class Conta
{
protected:
  // Nome da conta para login
  std::string _nome;

  // Senha da conta
  std::string _senha;

  // Tipo de cargo
  Cargo _cargo;

public:
  // Construtor da conta
  Conta(std::string nome, std::string senha, Cargo cargo);

  // Retorna o nome da conta
  std::string get_nome() const;

  // Retorna a senha da conta
  std::string get_senha() const;

  // Retorna o nome do cargo
  std::string get_cargo_txt() const;
  
  // Retorna o inteiro atribuído ao cargo no enum
  int get_cargo() const;
};

#endif