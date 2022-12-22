#ifndef _RESTAURANTE_H_
#define _RESTAURANTE_H_

#include "produto.h"
#include <vector>

/// @brief Classe restaurante guarda o lucro a avaliação e o cardápio
class Restaurante
{
private:

  // Avaliação média do restaurante
  double _avaliacao; 

  /// @brief Lucro obtido no dia
  double _lucro;

  /// @brief Cardápio do restaurante -> Vetor de produtos
  std::vector<Produto> _cardapio;

public:
  /// @brief Construtor
  /// @param lucro Lucro obtido no dia
  /// @param avaliacao Avaliação média do restaurante
  /// @param _cardapio Cardápio do restaurante -> Vetor de produtos
  Restaurante(double lucro, double avaliacao, std::vector<Produto> _cardapio);

  /// @brief Calcula o lucro no dia
  /// @return Lucro do dia
  double calcular_lucro_dia();

  /// @brief Ordena os produtos descrescentemente de acordo com sua lucratividade
  /// @return Vetor ordenado
  std::vector<Produto> mais_lucrativos();

  /// @brief Ordena os produtos decrescentemente de acordo com o número de vendas
  /// @return Vetor ordenado
  std::vector<Produto> mais_vendidos();
};

#endif