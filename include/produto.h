#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto{
    private:
        std::string nome;
        double lucro;
        double avaliacao;

    public:
        double mostrar_preco();
        double mostrar_lucro();
        double mostrar_avaliacao();
        void mudar_avaliacao();
}

#endif