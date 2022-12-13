#ifndef BANCO_DE_DADOS_H
#define BANCO_DE_DADOS_H

#include <vector>
#include <iostream>

#include "cadastro.h"
#include "cliente.h"
#include "funcionario.h"
#include "gerente.h"


class Banco_de_dados{
  private:
    std::vector<Cadastro> Banco_de_Cadastros;
  public:
    bool check_nome_login(std::string nome);
    bool check_senha_login(Cadastro login, std::string senha);
    Cadastro efetuar_login(std::string nome);
    void inserir_cadastro(std::string nome, std::string senha, int cargo);
};

#endif