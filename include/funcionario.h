#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "conta.h"

class Funcionario : public Conta{
  public:
    Funcionario(std::string nome, std::string senha);
};

#endif