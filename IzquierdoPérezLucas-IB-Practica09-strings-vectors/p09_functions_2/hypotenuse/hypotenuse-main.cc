/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 11 2023
  * @brief 
  * @bug There are no known bugs
  */

#include <iostream>
#include "hypotenuse.h"

int main() {
  double lado1, lado2;
  std::cin >> lado1 >> lado2;
  double numero = (lado1 * lado1) + (lado2 * lado2);
  double resultado = RaizCuadrada(numero);
  std::cout << resultado << std::endl;

return 0;
}
