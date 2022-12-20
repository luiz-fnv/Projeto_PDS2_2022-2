#include "../include/restaurante.h"
#include "../include/banco_de_dados.h"

Restaurante::Restaurante(double lucro, double avaliacao)
{
    _lucro = lucro;
    _avaliacao = avaliacao;
}

double Restaurante::calcular_lucro_dia()
{
    for (long unsigned int i = 0; i < _cardapio.size(); i++)
    {
        _lucro = _cardapio[i].get_lucro();
    }
    return _lucro;
}

std::vector<Produto> Restaurante::mais_lucrativos()
{
    std::vector<Produto> maior_lucro;
    Produto aux = maior_lucro[0];
    for (long unsigned int i = 0; i < _cardapio.size(); i++)
    {
        maior_lucro[i] = _cardapio[i];
    }
    for (long unsigned int i = 0; i < _cardapio.size() - 1; i++)
    {
        for (long unsigned int j = i; j < _cardapio.size() - 1; j++)
        {
            if (_cardapio[i].get_lucro() < _cardapio[j].get_lucro())
            {
                aux = _cardapio[i];
                _cardapio[i] = _cardapio[j];
                _cardapio[j] = aux;
            }
        }
    }
    return maior_lucro;
}