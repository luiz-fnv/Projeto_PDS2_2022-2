#include "doctest.h"

#include "pedido.h"

TEST_CASE("Testa Pedido"){
    Pedido ped1 = Pedido();
    CHECK_EQ("A preparar", ped1.get_estado());
    ped1.atualiza_estado("saiu para entrega");
    CHECK_EQ("saiu para entrega", ped1.get_estado());
    ped1.cancela_estado();
    CHECK_EQ("Pedido cancelado", ped1.get_estado());

    Pedido ped2 = Pedido();
    CHECK_EQ("A preparar", ped2.get_estado());
    ped2.atualiza_estado("o produto está sendo preparado e será entregue em instantes");
    CHECK_EQ("o produto está sendo preparado e será entregue em instantes", ped2.get_estado());
    ped2.cancela_estado();
    CHECK_EQ("Pedido cancelado", ped2.get_estado());
}