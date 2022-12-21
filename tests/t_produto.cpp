#include "doctest.h"

#include "produto.h"

TEST_CASE("Testa Produto")
{
    Produto prod1 = Produto("Hambúrguer", 10.00);

    CHECK_EQ("Hambúrguer", prod1.get_nome());
    CHECK_EQ(10.00, prod1.get_preco());
    CHECK_EQ(0, prod1.get_avaliacao());
    CHECK_EQ(0, prod1.get_vendidos());
    CHECK_EQ(0, prod1.get_lucro());

    prod1.add_avaliacao(5); // a1
    CHECK_EQ(5, prod1.get_avaliacao());

    prod1.add_avaliacao(3); // a2
    CHECK_EQ(4, prod1.get_avaliacao());

    prod1.add_avaliacao(4); // a3
    CHECK_EQ(4, prod1.get_avaliacao());

    prod1.add_avaliacao(1); // a4
    CHECK_EQ(3.25, prod1.get_avaliacao());

    prod1.add_avaliacao(5); // a5
    CHECK_EQ(3.6, prod1.get_avaliacao());

    prod1.add_avaliacao(3); // a6
    CHECK_EQ(3.5, prod1.get_avaliacao());

    prod1.add_avaliacao(1); // a7
    CHECK_EQ(22.0 / 7.0, prod1.get_avaliacao());

    prod1.add_avaliacao(4); // a8
    CHECK_EQ(3.25, prod1.get_avaliacao());

    prod1.add_avaliacao(1); // a9
    CHECK_EQ(3, prod1.get_avaliacao());

    prod1.add_avaliacao(5); // a10
    CHECK_EQ(3.2, prod1.get_avaliacao());

    Produto prod2 = Produto("Pizza", 40.00);

    CHECK_EQ("Pizza", prod2.get_nome());
    CHECK_EQ(40.00, prod2.get_preco());
    CHECK_EQ(0, prod2.get_avaliacao());
    CHECK_EQ(0, prod2.get_lucro());

    prod2.add_avaliacao(2); // a1
    CHECK_EQ(2, prod2.get_avaliacao());

    prod2.add_avaliacao(3); // a2
    CHECK_EQ(2.5, prod2.get_avaliacao());

    prod2.add_avaliacao(4); // a3
    CHECK_EQ(3, prod2.get_avaliacao());

    prod2.add_avaliacao(5); // a4
    CHECK_EQ(3.5, prod2.get_avaliacao());

    prod2.add_avaliacao(3); // a5
    CHECK_EQ(3.4, prod2.get_avaliacao());

    prod2.add_avaliacao(5); // a6
    CHECK_EQ(11.0 / 3.0, prod2.get_avaliacao());

    prod2.add_avaliacao(1); // a7
    CHECK_EQ(23.0 / 7.0, prod2.get_avaliacao());

    prod2.add_avaliacao(3); // a8
    CHECK_EQ(3.25, prod2.get_avaliacao());

    prod2.add_avaliacao(4); // a9
    CHECK_EQ(10.0 / 3.0, prod2.get_avaliacao());

    prod2.add_avaliacao(5); // a10
    CHECK_EQ(3.5, prod2.get_avaliacao());

    Produto prod3 = Produto("Coca", 5.00);

    CHECK_EQ("Coca", prod3.get_nome());
    CHECK_EQ(5.00, prod3.get_preco());
    CHECK_EQ(0, prod3.get_avaliacao());
    CHECK_EQ(0, prod3.get_lucro());

    prod3.add_avaliacao(1); // a1
    CHECK_EQ(1, prod3.get_avaliacao());

    prod3.add_avaliacao(4); // a2
    CHECK_EQ(2.5, prod3.get_avaliacao());

    prod3.add_avaliacao(1); // a3
    CHECK_EQ(2, prod3.get_avaliacao());

    prod3.add_avaliacao(3); // a4
    CHECK_EQ(2.25, prod3.get_avaliacao());

    prod3.add_avaliacao(4); // a5
    CHECK_EQ(2.6, prod3.get_avaliacao());

    prod3.add_avaliacao(2); // a6
    CHECK_EQ(2.5, prod3.get_avaliacao());

    prod3.add_avaliacao(4); // a7
    CHECK_EQ(19.0 / 7.0, prod3.get_avaliacao());

    prod3.add_avaliacao(1); // a8
    CHECK_EQ(2.5, prod3.get_avaliacao());

    prod3.add_avaliacao(3); // a9
    CHECK_EQ(23.0 / 9.0, prod3.get_avaliacao());

    prod3.add_avaliacao(1); // a10
    CHECK_EQ(2.4, prod3.get_avaliacao());
}
