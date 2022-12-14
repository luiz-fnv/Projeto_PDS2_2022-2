#ifndef GERENTE_H
#define GERENTE_H

#include <iostream>

#include "conta.h"

class Gerente : public Conta{
  public:
    Gerente(std::string nome, std::string senha);
};

#endif