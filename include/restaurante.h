#ifndef _RESTAURANTE_H_
#define _RESTAURANTE_H_

#include "produto.h"
#include <vector>

class Restaurante
{
private:
  // Lucro obtido no dia
  double _lucro;

  // Avaliação média do restaurante
  double _avaliacao;

  // Cardápio do restaurante -> Vetor de produtos
  std::vector<Produto> _cardapio;

public:

  // Construtor
  Restaurante(double lucro, double avaliacao, std::vector<Produto> _cardapio);

  // Calcula o lucro no dia
  double calcular_lucro_dia();

  // Ordena os produtos descrescentemente de acordo com sua lucratividade
  std::vector<Produto> mais_lucrativos();

  // Ordena os produtos decrescentemente de acordo com o número de vendas
  std::vector<Produto> mais_vendidos();
};

#endif