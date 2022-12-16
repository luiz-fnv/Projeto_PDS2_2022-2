#include "doctest.h"

#include "conta.h"
#include "cliente.h"
#include "funcionario.h"
#include "gerente.h"

TEST_CASE("Testa Contas"){
    Cliente cliente1 = Cliente("Marcelo", "senha", "Rua A, 50");
    CHECK_EQ(0, cliente1.get_cargo());
    CHECK_EQ("cliente", cliente1.get_cargo_txt());

    Cliente cliente2 = Cliente("Marcela", "23765", "Rua B, 99 - Bairro das Avenidas");
    CHECK_EQ(0, cliente2.get_cargo());
    CHECK_EQ("cliente", cliente2.get_cargo_txt());

    Funcionario func1 = Funcionario("José", "12345");
    CHECK_EQ(1, func1.get_cargo());
    CHECK_EQ("funcionário", func1.get_cargo_txt());

    Funcionario func2 = Funcionario("Maria", "senha_dificil");
    CHECK_EQ(1, func2.get_cargo());
    CHECK_EQ("funcionário", func2.get_cargo_txt());

    Gerente ger1 = Gerente("Alberto", "password");
    CHECK_EQ(2, ger1.get_cargo());
    CHECK_EQ("gerente", ger1.get_cargo_txt());

    Gerente ger2 = Gerente("Roberto", "rob44");
    CHECK_EQ(2, ger2.get_cargo());
    CHECK_EQ("gerente", ger2.get_cargo_txt());
}