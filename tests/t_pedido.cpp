#include "doctest.h"

#include "pedido.h"

TEST_CASE("Testa Pedido"){
    Produto prod1 = Produto("Hambúrguer", 10.00);
    Produto prod2 = Produto("Pizza", 40.00);
    Produto prod3 = Produto("Agua", 3.00);
    Produto prod4 = Produto("Cerveja", 5.00);
    Produto prod5 = Produto("Batata", 12.00);
    std::vector<Produto> pedido;
    pedido.push_back(prod1);
    pedido.push_back(prod2);
    Pedido ped1 = Pedido(pedido, "Rua A");
    CHECK_EQ("Rua A", ped1.get_endereco());
    CHECK_EQ(50, ped1.get_preco());
    ped1.add_prod(prod3);
    CHECK_EQ(53, ped1.get_preco());
    ped1.add_prod(prod4);
    CHECK_EQ(58, ped1.get_preco());
    ped1.add_prod(prod5);
    CHECK_EQ(70, ped1.get_preco());
    CHECK_EQ(preparacao, ped1.get_estado());
    ped1.mudar_estado(enviado);
    CHECK_EQ(enviado, ped1.get_estado());
    ped1.mudar_estado(preparacao);
    CHECK_EQ(preparacao, ped1.get_estado());
    ped1.mudar_estado(concluido);
    CHECK_EQ(concluido, ped1.get_estado());
    ped1.mudar_estado(preparacao);
    CHECK_EQ(preparacao, ped1.get_estado());
    ped1.mudar_estado(cancelado);
    CHECK_EQ(cancelado, ped1.get_estado());
    ped1.mudar_estado(preparacao);
    CHECK_EQ(preparacao, ped1.get_estado());

    Produto prod6 = Produto("Lasanha", 30.00);
    Produto prod7 = Produto("Vinho", 60.00);
    Produto prod8 = Produto("Cachorro-Quente", 8.00);
    Produto prod9 = Produto("Espetinho", 5.00);
    Produto prod10 = Produto("Porção", 22.00);

    std::vector<Produto> pedido_2;
    Pedido ped2 = Pedido(pedido_2, "Rua B");
    CHECK_EQ(0, ped2.get_preco());
    ped2.add_prod(prod1);
    CHECK_EQ(10, ped2.get_preco());
    ped2.add_prod(prod2);
    CHECK_EQ(50, ped2.get_preco());
    ped2.add_prod(prod3);
    CHECK_EQ(53, ped2.get_preco());
    ped2.add_prod(prod4);
    CHECK_EQ(58, ped2.get_preco());
    ped2.add_prod(prod5);
    CHECK_EQ(70, ped2.get_preco());
    ped2.add_prod(prod6);
    CHECK_EQ(100, ped2.get_preco());
    ped2.add_prod(prod7);
    CHECK_EQ(160, ped2.get_preco());
    ped2.add_prod(prod8);
    CHECK_EQ(168, ped2.get_preco());
    ped2.add_prod(prod9);
    CHECK_EQ(173, ped2.get_preco());
    ped2.add_prod(prod10);
    CHECK_EQ(195, ped2.get_preco());
    CHECK_EQ(preparacao, ped2.get_estado());
    ped2.mudar_estado(enviado);
    CHECK_EQ(enviado, ped2.get_estado());
    ped2.mudar_estado(concluido);
    CHECK_EQ(concluido, ped2.get_estado());
}