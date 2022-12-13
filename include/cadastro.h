#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>

enum Cargo{
  c_Cliente,
  c_Funcionario,
  c_Gerente
};

class Cadastro{
  protected:
    std::string _nome;
    std::string _senha;
    Cargo _cargo;

  public:
    std::string get_nome();
    std::string get_senha();
    std::string get_cargo_txt();
    int get_cargo();
};

#endif