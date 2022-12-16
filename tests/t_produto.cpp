#include "doctest.h"

#include "produto.h"

TEST_CASE("Testa Produto"){
    Produto prod1 = Produto("Hambúrguer", 10.00);
    CHECK_EQ("Hambúrguer", prod1.get_nome());
    CHECK_EQ(10.00, prod1.get_preco());
    CHECK_EQ(0, prod1.get_avaliacao());
    CHECK_EQ(0, prod1.get_vendidos());
    CHECK_EQ(0, prod1.get_lucro());
    prod1.mudar_avaliacao(5);
    CHECK_EQ(5, prod1.get_avaliacao());
    //prod1.mudar_avaliacao(3);
    //CHECK_EQ(4, prod1.get_avaliacao());

    //prod1.mudar_avaliacao(4);
    //CHECK_EQ(4, prod1.get_avaliacao());
    //prod1.mudar_avaliacao(0);
    //CHECK_EQ(4, prod1.get_avaliacao());

    Produto prod2 = Produto("Pizza", 40.00);
    CHECK_EQ("Pizza", prod2.get_nome());
    CHECK_EQ(40.00, prod2.get_preco());
    CHECK_EQ(0, prod2.get_avaliacao());
    CHECK_EQ(0, prod2.get_lucro());
    prod2.mudar_avaliacao(2);
    CHECK_EQ(2, prod2.get_avaliacao());

    Produto prod3 = Produto("Coca", 5.00);
    CHECK_EQ("Coca", prod3.get_nome());
    CHECK_EQ(5.00, prod3.get_preco());
    CHECK_EQ(0, prod3.get_avaliacao());
    CHECK_EQ(0, prod3.get_lucro());
    prod3.mudar_avaliacao(1);
    CHECK_EQ(1, prod3.get_avaliacao());
    prod3.mudar_avaliacao(0);
    CHECK_EQ(1, prod3.get_avaliacao());
    //prod3.mudar_avaliacao(6);
    //CHECK_EQ(1, prod3.get_avaliacao());
}
