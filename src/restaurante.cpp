#include "../include/restaurante.h"
#include "../include/banco_de_dados.h"

Restaurante::Restaurante(double lucro, double avaliacao, std::vector<Produto> cardapio)
{
    _lucro = lucro;
    _avaliacao = avaliacao;
    _cardapio = cardapio;
}

double Restaurante::calcular_lucro_dia()
{

    for (long unsigned int i = 0; i < _cardapio.size(); i++)
    {
        _lucro += _cardapio[i].get_lucro();
    }
    return _lucro;
}

std::vector<Produto> Restaurante::mais_lucrativos()
{
    std::vector<Produto> maior_lucro;
    
    for (long unsigned int i = 0; i < _cardapio.size(); i++)
    {
        maior_lucro.push_back(_cardapio[i]);
    }

    Produto aux = maior_lucro[0];

    for (long unsigned int i = 0; i < maior_lucro.size(); i++)
    {
        for (long unsigned int j = i; j < maior_lucro.size(); j++)
        {
            if (maior_lucro[i].get_lucro() < maior_lucro[j].get_lucro())
            {
                aux = maior_lucro[i];
                maior_lucro[i] = maior_lucro[j];
                maior_lucro[j] = aux;
            }
        }
    }

    return maior_lucro;
}