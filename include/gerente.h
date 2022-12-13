#ifndef GERENTE_H
#define GERENTE_H

#include "cadastro.h"

class Gerente : public Cadastro{
  public:
    Gerente(std::string nome, std::string senha);
};

#endif