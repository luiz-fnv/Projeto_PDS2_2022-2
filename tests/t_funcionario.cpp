#include "doctest.h"
#include "funcionario.h"

TEST_CASE("Testa Funcionário"){
    Funcionario func1 = Funcionario("José", "12345");
    CHECK_EQ("José", func1.get_nome());
    CHECK_EQ("12345", func1.get_senha());
    CHECK_EQ(1, func1.get_cargo());

}
