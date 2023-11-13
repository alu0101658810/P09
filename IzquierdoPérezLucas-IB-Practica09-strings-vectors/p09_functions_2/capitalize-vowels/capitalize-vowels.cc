/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 09 2023
  * @brief This program change a caracter chain as the same word but this chain
  * has a capitar letter to vocals and lower letters for consonants. 
  * @bug There are no known bugs
  */

#include "capitalize-vowels.h"


void ChangeFuncion(std::string &palabra_ingresada) {
  for (char &conversor : palabra_ingresada) {
    if (conversor < 91) {
       if (conversor != 'A' && conversor != 'E' && conversor != 'I' && conversor != 'O' && conversor != 'U') {
         conversor = static_cast<char>(conversor + 32);
       }
    }
    else { 
      if (conversor == 'a' || conversor == 'e' || conversor == 'i' || conversor == 'o' || conversor == 'u') {
        conversor = static_cast<char>(conversor - 32);
      }
    }
  }
}

