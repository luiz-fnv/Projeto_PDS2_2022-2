#include "doctest.h"

#include "cliente.h"
#include "pedido.h"

TEST_CASE("Testa Cliente")
{
    Cliente cliente1 = Cliente("Marcelo", "senha", "Rua A, 50");
    CHECK_EQ("Marcelo", cliente1.get_nome());
    CHECK_EQ("senha", cliente1.get_senha());
    CHECK_EQ("Rua A, 50", cliente1.get_endereco());
    CHECK_EQ(0, cliente1.get_cargo());

    Cliente cliente2 = Cliente("Marcela", "23765", "Rua B, 99 - Bairro das Avenidas");
    CHECK_EQ("Marcela", cliente2.get_nome());
    CHECK_EQ("23765", cliente2.get_senha());
    CHECK_EQ("Rua B, 99 - Bairro das Avenidas", cliente2.get_endereco());
    CHECK_EQ(0, cliente2.get_cargo());
}

