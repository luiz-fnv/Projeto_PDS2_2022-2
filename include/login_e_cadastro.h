#ifndef LOGIN_E_CADASTRO_H
#define LOGIN_E_CADASTRO_H

#include <iostream>
#include <utility>
#include <limits>
#include "banco_de_dados.h"

bool check_nome_login(std::string nome, Banco_de_dados data);
bool check_senha_login(Conta login, std::string senha);
Conta efetuar_login(std::string nome, Banco_de_dados data);
int login(Banco_de_dados data);
Banco_de_dados cadastrar(Banco_de_dados data);

#endif