#include "doctest.h"

#include "restaurante.h"
#include "pedido.h"
#include "produto.h"

TEST_CASE("Teste Restaurante")
{
    double lucro = 0;
    double avaliacao = 0;
    std::vector<Produto> cardapio;
    Produto prod1 = Produto("Hambúrguer", 10.00);
    Produto prod2 = Produto("Pizza", 40.00);
    Produto prod3 = Produto("Agua", 3.00);
    Produto prod4 = Produto("Cerveja", 5.00);
    Produto prod5 = Produto("Batata", 12.00);
    Produto prod6 = Produto("Lasanha", 30.00);
    Produto prod7 = Produto("Vinho", 60.00);
    Produto prod8 = Produto("Cachorro-Quente", 8.00);
    Produto prod9 = Produto("Espetinho", 5.00);
    Produto prod10 = Produto("Porção", 22.00);
    cardapio.push_back(prod1);
    cardapio.push_back(prod2);
    cardapio.push_back(prod3);
    cardapio.push_back(prod4);
    cardapio.push_back(prod5);
    cardapio.push_back(prod6);
    cardapio.push_back(prod7);
    cardapio.push_back(prod8);
    cardapio.push_back(prod9);
    cardapio.push_back(prod10);

    cardapio[0].add_venda();
    cardapio[1].add_venda();
    cardapio[2].add_venda();
    cardapio[3].add_venda();
    cardapio[4].add_venda();
    cardapio[5].add_venda();
    cardapio[6].add_venda();
    cardapio[7].add_venda();
    cardapio[8].add_venda();
    cardapio[9].add_venda();

    Restaurante rest1 = Restaurante(lucro, avaliacao, cardapio);
    
    CHECK_EQ(195, rest1.calcular_lucro_dia());
    std::vector<Produto> mais_lucrativos = rest1.mais_lucrativos();

    CHECK_EQ("Vinho", mais_lucrativos[0].get_nome());
    CHECK_EQ(60, mais_lucrativos[0].get_preco());

    CHECK_EQ("Pizza", mais_lucrativos[1].get_nome());
    CHECK_EQ(40, mais_lucrativos[1].get_preco());

    CHECK_EQ("Lasanha", mais_lucrativos[2].get_nome());
    CHECK_EQ(30, mais_lucrativos[2].get_preco());

    CHECK_EQ("Porção", mais_lucrativos[3].get_nome());
    CHECK_EQ(22, mais_lucrativos[3].get_preco());

    CHECK_EQ("Batata", mais_lucrativos[4].get_nome());
    CHECK_EQ(12, mais_lucrativos[4].get_preco());

    CHECK_EQ("Hambúrguer", mais_lucrativos[5].get_nome());
    CHECK_EQ(10, mais_lucrativos[5].get_preco());

    CHECK_EQ("Cachorro-Quente", mais_lucrativos[6].get_nome());
    CHECK_EQ(8, mais_lucrativos[6].get_preco());

    CHECK_EQ("Espetinho", mais_lucrativos[7].get_nome());
    CHECK_EQ(5, mais_lucrativos[7].get_preco());

    CHECK_EQ("Cerveja", mais_lucrativos[8].get_nome());
    CHECK_EQ(5, mais_lucrativos[8].get_preco());

    CHECK_EQ("Agua", mais_lucrativos[9].get_nome());
    CHECK_EQ(3, mais_lucrativos[9].get_preco());    
}