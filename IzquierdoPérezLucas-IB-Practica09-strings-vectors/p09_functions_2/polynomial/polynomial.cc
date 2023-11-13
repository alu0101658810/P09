/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Lucas Izquierdo Pérez@ull.edu.es
  * @date Nov 7 2023
  * @brief This program 
  * @bug There are no known bugs
  */

#include <cmath>
#include "polynomial.h"

int CalcularFuncion(const std::vector<double>& vector1, const int& valor1) {
  int resultado = 0;
  for (size_t i = 0; i < vector1.size(); ++i) {
    resultado += vector1[i] * pow(valor1, vector1.size() - 1 - i);
  }
  return resultado;
}
