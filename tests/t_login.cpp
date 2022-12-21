#include "doctest.h"
#include "login_e_cadastro.h"

TEST_CASE("Testa Login")
{
    Banco_de_dados banco;
    banco.inserir_conta("Pedro", "12345", c_Cliente);
    banco.inserir_conta("Mariana", "0101", c_Funcionario);
    banco.inserir_conta("Joaquim", "*&¨%$", c_Gerente);

    Conta cliente1 = Conta("Pedro", "12345", c_Cliente);
    Conta func1 = Conta("Mariana", "0101", c_Funcionario);
    Conta ger1 = Conta("Joaquim", "*&¨%$", c_Gerente);

    Conta cliente2 = Conta("Marcela", "23765", c_Cliente);
    Conta func2 = Conta("Maria", "senha_dificil", c_Funcionario);
    Conta ger2 = Conta("Roberto", "rob44", c_Gerente);

    CHECK(check_nome_login("Pedro", banco));
    CHECK(check_nome_login("Mariana", banco));
    CHECK(check_nome_login("Joaquim", banco));

    CHECK(check_senha_login(cliente2, "23765"));
    CHECK(check_senha_login(func2, "senha_dificil"));
    CHECK(check_senha_login(ger2, "rob44"));

    CHECK_EQ(cliente1.get_nome(), efetuar_login("Pedro", banco).get_nome());
    CHECK_EQ(cliente1.get_cargo(), efetuar_login("Pedro", banco).get_cargo());
    CHECK_EQ(cliente1.get_cargo_txt(), efetuar_login("Pedro", banco).get_cargo_txt());
    CHECK_EQ(cliente1.get_senha(), efetuar_login("Pedro", banco).get_senha());

    CHECK_EQ(func1.get_nome(), efetuar_login("Mariana", banco).get_nome());
    CHECK_EQ(func1.get_cargo(), efetuar_login("Mariana", banco).get_cargo());
    CHECK_EQ(func1.get_cargo_txt(), efetuar_login("Mariana", banco).get_cargo_txt());
    CHECK_EQ(func1.get_senha(), efetuar_login("Mariana", banco).get_senha());

    CHECK_EQ(ger1.get_nome(), efetuar_login("Joaquim", banco).get_nome());
    CHECK_EQ(ger1.get_cargo(), efetuar_login("Joaquim", banco).get_cargo());
    CHECK_EQ(ger1.get_cargo_txt(), efetuar_login("Joaquim", banco).get_cargo_txt());
    CHECK_EQ(ger1.get_senha(), efetuar_login("Joaquim", banco).get_senha());
}