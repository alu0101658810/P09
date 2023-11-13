/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 10 2023
  * @brief This program is a complement program to scalar_product_main.cc which
  * calcule the scalar_product. 
  * @bug There are no known bugs
  */

#include <vector>
#include "scalar-product.h"

double ProductoEscalar(const std::vector<double>& vector1, const std::vector<double>& vector2) {
  if (vector1.size() != vector2.size()) {
    return 0;
  }
  double producto_escalar = 0.0;
  for (size_t i = 0; i < vector1.size(); i++) {
    producto_escalar += vector1[i] * vector2[i];
  }

  return producto_escalar; 
}
