#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>
#include "cardapio.h"


/// @brief Enum de possíveis cargos

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
  /// @brief Nome da conta para login
  std::string _nome;

  /// @brief Senha da conta
  std::string _senha;

  /// @brief Tipo de cargo
  Cargo _cargo;

public:
  /// @brief Construtor da conta
  /// @param nome Nome do usuário
  /// @param senha Senha do usuário
  /// @param cargo Cargo do usuário
  Conta(std::string nome, std::string senha, Cargo cargo);

  /// @brief  Retorna o nome da conta
  /// @return Nome do usuário
  std::string get_nome() const;

  /// @brief Retorna a senha da conta
  /// @return Retorna a senha da conta
  std::string get_senha() const;

  /// @brief Retorna o nome do cargo
  /// @return Cargo em string 
  std::string get_cargo_txt() const;
  
  /// @brief Retorna o inteiro atribuído ao cargo no enum
  /// @return Inteiro referente ao cargo
  int get_cargo() const;
};

#endif