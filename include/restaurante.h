#ifndef _RESTAURANTE_H_
#define _RESTAURANTE_H_

#include "produto.h"
#include <vector>

class Restaurante{
    private:
        double _lucro;
        double _avaliacao;
        std::vector<Produto> _cardapio;
    public:
        Restaurante(double lucro, double avaliacao, std::vector<Produto> cardapio);
        double calcular_lucro_dia();
        void mostrar_vendas();
        void finalizar_dia();
}

#endif