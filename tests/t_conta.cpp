#include "doctest.h"

#include "conta.h"

TEST_CASE("Testa Contas")
{
    Conta cliente1 = Conta("Marcelo", "senha", c_Cliente);
    CHECK_EQ("Marcelo", cliente1.get_nome());
    CHECK_EQ("senha", cliente1.get_senha());
    CHECK_EQ(0, cliente1.get_cargo());
    CHECK_EQ("cliente", cliente1.get_cargo_txt());

    Conta cliente2 = Conta("Marcela", "23765", c_Cliente);
    CHECK_EQ("Marcela", cliente2.get_nome());
    CHECK_EQ("23765", cliente2.get_senha());
    CHECK_EQ(0, cliente2.get_cargo());
    CHECK_EQ("cliente", cliente2.get_cargo_txt());

    Conta cliente3 = Conta("Ana", "40028922", c_Cliente);
    CHECK_EQ("Ana", cliente3.get_nome());
    CHECK_EQ("40028922", cliente3.get_senha());
    CHECK_EQ(0, cliente3.get_cargo());
    CHECK_EQ("cliente", cliente3.get_cargo_txt());

    Conta cliente4 = Conta("Hernane", "onfgdcwenig", c_Cliente);
    CHECK_EQ("Hernane", cliente4.get_nome());
    CHECK_EQ("onfgdcwenig", cliente4.get_senha());
    CHECK_EQ(0, cliente4.get_cargo());
    CHECK_EQ("cliente", cliente4.get_cargo_txt());

    Conta cliente5 = Conta("C3PO", "Star_Wars", c_Cliente);
    CHECK_EQ("C3PO", cliente5.get_nome());
    CHECK_EQ("Star_Wars", cliente5.get_senha());
    CHECK_EQ(0, cliente5.get_cargo());
    CHECK_EQ("cliente", cliente5.get_cargo_txt());

    Conta func1 = Conta("José", "12345", c_Funcionario);
    CHECK_EQ("José", func1.get_nome());
    CHECK_EQ("12345", func1.get_senha());
    CHECK_EQ(1, func1.get_cargo());
    CHECK_EQ("funcionário", func1.get_cargo_txt());

    Conta func2 = Conta("Maria", "senha_dificil", c_Funcionario);
    CHECK_EQ("Maria", func2.get_nome());
    CHECK_EQ("senha_dificil", func2.get_senha());
    CHECK_EQ(1, func2.get_cargo());
    CHECK_EQ("funcionário", func2.get_cargo_txt());

    Conta func3 = Conta("Pedro", "sou_funcionario_123*", c_Funcionario);
    CHECK_EQ("Pedro", func3.get_nome());
    CHECK_EQ("sou_funcionario_123*", func3.get_senha());
    CHECK_EQ(1, func3.get_cargo());
    CHECK_EQ("funcionário", func3.get_cargo_txt());

    Conta func4 = Conta("R2D2", "Han_Solo*", c_Funcionario);
    CHECK_EQ("R2D2", func4.get_nome());
    CHECK_EQ("Han_Solo*", func4.get_senha());
    CHECK_EQ(1, func4.get_cargo());
    CHECK_EQ("funcionário", func4.get_cargo_txt());

    Conta func5 = Conta("Lionel", "Messi", c_Funcionario);
    CHECK_EQ("Lionel", func5.get_nome());
    CHECK_EQ("Messi", func5.get_senha());
    CHECK_EQ(1, func5.get_cargo());
    CHECK_EQ("funcionário", func5.get_cargo_txt());

    Conta ger1 = Conta("Alberto", "password", c_Gerente);
    CHECK_EQ("Alberto", ger1.get_nome());
    CHECK_EQ("password", ger1.get_senha());
    CHECK_EQ(2, ger1.get_cargo());
    CHECK_EQ("gerente", ger1.get_cargo_txt());

    Conta ger2 = Conta("Roberto", "rob44", c_Gerente);
    CHECK_EQ("Roberto", ger2.get_nome());
    CHECK_EQ("rob44", ger2.get_senha());
    CHECK_EQ(2, ger2.get_cargo());
    CHECK_EQ("gerente", ger2.get_cargo_txt());

    Conta ger3 = Conta("Clara", "Fábio", c_Gerente);
    CHECK_EQ("Clara", ger3.get_nome());
    CHECK_EQ("Fábio", ger3.get_senha());
    CHECK_EQ(2, ger3.get_cargo());
    CHECK_EQ("gerente", ger3.get_cargo_txt());

    Conta ger4 = Conta("Manoel", "Gomes", c_Gerente);
    CHECK_EQ("Manoel", ger4.get_nome());
    CHECK_EQ("Gomes", ger4.get_senha());
    CHECK_EQ(2, ger4.get_cargo());
    CHECK_EQ("gerente", ger4.get_cargo_txt());

    Conta ger5 = Conta("Aaron Rodgers", "Run_the_table", c_Gerente);
    CHECK_EQ("Aaron Rodgers", ger5.get_nome());
    CHECK_EQ("Run_the_table", ger5.get_senha());
    CHECK_EQ(2, ger5.get_cargo());
    CHECK_EQ("gerente", ger5.get_cargo_txt());
}