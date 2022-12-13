#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "cadastro.h"

class Funcionario : public Cadastro{
  public:
    Funcionario(std::string nome, std::string senha);
};


#endif