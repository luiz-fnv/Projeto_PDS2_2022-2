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

TEST_CASE("Testa vendidos")
{
    double lucro2 = 0;
    double avaliacao2 = 0;
    std::vector<Produto> cardapio2;
    
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

    cardapio2.push_back(prod1);
    cardapio2.push_back(prod2);
    cardapio2.push_back(prod3);
    cardapio2.push_back(prod4);
    cardapio2.push_back(prod5);
    cardapio2.push_back(prod6);
    cardapio2.push_back(prod7);
    cardapio2.push_back(prod8);
    cardapio2.push_back(prod9);
    cardapio2.push_back(prod10);

    cardapio2[3].add_venda();
    cardapio2[3].add_venda();
    cardapio2[3].add_venda();
    cardapio2[3].add_venda();
    cardapio2[3].add_venda();
    cardapio2[3].add_venda();
    cardapio2[3].add_venda();
    cardapio2[3].add_venda();
    cardapio2[3].add_venda();
    cardapio2[3].add_venda();

    cardapio2[7].add_venda();
    cardapio2[7].add_venda();
    cardapio2[7].add_venda();
    cardapio2[7].add_venda();
    cardapio2[7].add_venda();
    cardapio2[7].add_venda();
    cardapio2[7].add_venda();
    cardapio2[7].add_venda();
    cardapio2[7].add_venda();
    
    cardapio2[0].add_venda();
    cardapio2[0].add_venda();
    cardapio2[0].add_venda();
    cardapio2[0].add_venda();
    cardapio2[0].add_venda();
    cardapio2[0].add_venda();
    cardapio2[0].add_venda();
    cardapio2[0].add_venda();

    cardapio2[5].add_venda();
    cardapio2[5].add_venda();
    cardapio2[5].add_venda();
    cardapio2[5].add_venda();
    cardapio2[5].add_venda();
    cardapio2[5].add_venda();
    cardapio2[5].add_venda();

    cardapio2[8].add_venda();
    cardapio2[8].add_venda();
    cardapio2[8].add_venda();
    cardapio2[8].add_venda();
    cardapio2[8].add_venda();
    cardapio2[8].add_venda();

    cardapio2[1].add_venda();
    cardapio2[1].add_venda();
    cardapio2[1].add_venda();
    cardapio2[1].add_venda();
    cardapio2[1].add_venda();

    cardapio2[4].add_venda();
    cardapio2[4].add_venda();
    cardapio2[4].add_venda();
    cardapio2[4].add_venda();

    cardapio2[2].add_venda();
    cardapio2[2].add_venda();
    cardapio2[2].add_venda();

    cardapio2[9].add_venda();
    cardapio2[9].add_venda();

    cardapio2[6].add_venda();


    Restaurante rest2 = Restaurante(lucro2, avaliacao2, cardapio2);

    std::vector<Produto> mais_vendidos = rest2.mais_vendidos();

    CHECK_EQ(10, cardapio2[3].get_vendidos());
    CHECK_EQ(9, cardapio2[7].get_vendidos());
    CHECK_EQ(8, cardapio2[0].get_vendidos());
    CHECK_EQ(7, cardapio2[5].get_vendidos());
    CHECK_EQ(6, cardapio2[8].get_vendidos());
    CHECK_EQ(5, cardapio2[1].get_vendidos());
    CHECK_EQ(4, cardapio2[4].get_vendidos());
    CHECK_EQ(3, cardapio2[2].get_vendidos());
    CHECK_EQ(2, cardapio2[9].get_vendidos());
    CHECK_EQ(1, cardapio2[6].get_vendidos());
    

    CHECK_EQ("Cerveja", mais_vendidos[0].get_nome());
    CHECK_EQ(5, mais_vendidos[0].get_preco());

    CHECK_EQ("Cachorro-Quente", mais_vendidos[1].get_nome());
    CHECK_EQ(8, mais_vendidos[1].get_preco());

    CHECK_EQ("Hambúrguer", mais_vendidos[2].get_nome());
    CHECK_EQ(10, mais_vendidos[2].get_preco());

    CHECK_EQ("Lasanha", mais_vendidos[3].get_nome());
    CHECK_EQ(30, mais_vendidos[3].get_preco());

    CHECK_EQ("Espetinho", mais_vendidos[4].get_nome());
    CHECK_EQ(5, mais_vendidos[4].get_preco());

    CHECK_EQ("Pizza", mais_vendidos[5].get_nome());
    CHECK_EQ(40, mais_vendidos[5].get_preco());

    CHECK_EQ("Batata", mais_vendidos[6].get_nome());
    CHECK_EQ(12, mais_vendidos[6].get_preco());

    CHECK_EQ("Agua", mais_vendidos[7].get_nome());
    CHECK_EQ(3, mais_vendidos[7].get_preco());

    CHECK_EQ("Porção", mais_vendidos[8].get_nome());
    CHECK_EQ(22, mais_vendidos[8].get_preco());

    CHECK_EQ("Vinho", mais_vendidos[9].get_nome());
    CHECK_EQ(60, mais_vendidos[9].get_preco());    
}