#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>
#include "cardapio.h"

enum Cargo{
  c_Cliente,
  c_Funcionario,
  c_Gerente,
  c_Nenhum
};

class Conta{
  protected:
    std::string _nome;
    std::string _senha;
    Cargo _cargo;

  public:
    std::string get_nome() const;
    std::string get_senha() const;
    std::string get_cargo_txt() const;
    int get_cargo() const;

    //gerente
    // void mostrar_cardapio_mais_vendidos(Cardapio cardapio) const;

};

#endif