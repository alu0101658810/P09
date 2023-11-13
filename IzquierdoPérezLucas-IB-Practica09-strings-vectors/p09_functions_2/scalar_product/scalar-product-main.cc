/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 10 2023
  * @brief This program calcule the two vectors scalar product.
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>
#include "scalar-product.h"

int main() {
  int numero_componentes1, numero_componentes2;
  std::cin >> numero_componentes1;
  std::vector<double> vector1(numero_componentes1);
  for (int i = 0; i < numero_componentes1; i++) {
    std::cin >> vector1[i];
  }
  std::cin >> numero_componentes2;
  std::vector<double> vector2(numero_componentes2);
  for (int i = 0; i < numero_componentes2; i++) {
    std::cin >> vector2[i];
  }
  double resultado = ProductoEscalar(vector1, vector2);
  std::cout << resultado << std::endl;
  return 0;
}
