#include "doctest.h"
#include "funcionario.h"

TEST_CASE("Testa Funcionário"){
    Funcionario func1 = Funcionario("José", "12345");
    CHECK_EQ(João, func1.get_nome());
}
