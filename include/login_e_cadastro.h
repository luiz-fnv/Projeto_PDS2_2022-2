#ifndef LOGIN_E_CADASTRO_H
#define LOGIN_E_CADASTRO_H

#include <iostream>
#include <utility>
#include <limits>
#include "banco_de_dados.h"

/// @brief Confere se o nome está no banco de dados
/// @param nome Nome do usuário
/// @param data Base de dados
/// @return Resultado booleano da checagem
bool check_nome_login(std::string nome, Banco_de_dados data);

/// @brief Confere se a senha é a certa 
/// @param login Conta do usuário
/// @param senha Senha do usuário
/// @return Resultado booleano da checagem
bool check_senha_login(Conta login, std::string senha);

/// @brief Caso a senha seja a certa realiza login
/// @param nome Nome do usuário
/// @param data Base de dados
/// @return A conta do usuário em caso de login bem sucedido
Conta efetuar_login(std::string nome, Banco_de_dados data);

/// @brief Retorna o inteiro associado ao enum de tipos de conta
/// @param data Base de dados
/// @return O inteiro associado ao enum do tipo de usuário
int login(Banco_de_dados data);

/// @brief Insere nova conta
/// @param data Base de dados
/// @return Base de dados atualizada com a nova conta
Banco_de_dados cadastrar(Banco_de_dados data);

#endif