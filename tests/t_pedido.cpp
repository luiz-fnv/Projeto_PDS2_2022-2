/*#include "doctest.h"

#include "pedido.h"

TEST_CASE("Testa Pedido"){
    Pedido ped1 = Pedido();
    CHECK_EQ("O pedido está sendo preparado.", ped1.get_estado());
    ped1.mudar_estado(enviado);
    CHECK_EQ("O pedido já foi enviado.", ped1.get_estado());
    ped1.mudar_estado(preparacao);
    CHECK_EQ("O pedido está sendo preparado.", ped1.get_estado());
    ped1.mudar_estado(concluido);
    CHECK_EQ("O pedido foi concluído", ped1.get_estado());
    ped1.mudar_estado(preparacao);
    CHECK_EQ("O pedido está sendo preparado.", ped1.get_estado());
    ped1.mudar_estado(cancelado);
    CHECK_EQ("O pedido foi cancelado pelo cliente", ped1.get_estado());
    ped1.mudar_estado(preparacao);
    CHECK_EQ("O pedido está sendo preparado.", ped1.get_estado());


    Pedido ped2 = Pedido();
    CHECK_EQ("O pedido está sendo preparado.", ped2.get_estado());
    ped2.mudar_estado(enviado);
    CHECK_EQ("O pedido já foi enviado.", ped2.get_estado());
    ped2.mudar_estado(concluido);
    CHECK_EQ("O pedido foi concluído", ped2.get_estado());
}*/