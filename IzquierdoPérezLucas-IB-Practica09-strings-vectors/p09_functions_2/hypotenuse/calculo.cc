/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 11 2023
  * @brief This program calcule a approximation of square root.
  * @bug There are no known bugs
  */

#include "hypotenuse.h"

double RaizCuadrada(const double& numero) {
  const double epsilon = 0.0001;
  double root = 1.0;
  double delta = 1.0; 
  while (((root * root) - numero) > epsilon or numero - (root *root) > epsilon) {
    if (root * root < numero) {
      while (root * root < numero) {
        root += delta;
      }
    } 
    else {
      while (root * root > numero) {
        root += delta;
      }
    }
    delta *= (-0.5);  
  }
  return root;
}
