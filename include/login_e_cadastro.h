#ifndef LOGIN_E_CADASTRO_H
#define LOGIN_E_CADASTRO_H

#include <iostream>
#include <utility>
#include <limits>
#include "banco_de_dados.h"

// Confere se o nome está no banco de dados
bool check_nome_login(std::string nome, Banco_de_dados data);
// Confere se a senha é a certa 
bool check_senha_login(Conta login, std::string senha);
// Caso a senha seja a certa realiza login
Conta efetuar_login(std::string nome, Banco_de_dados data);
// Retorna o inteiro associado ao enum de tipos de conta
int login(Banco_de_dados data);
// Insere nova conta
Banco_de_dados cadastrar(Banco_de_dados data);

#endif