//Implementação da função que converte números romanos.

#include "romanos.hpp"
#include <cstring>

int romanos_para_decimal(char const * num_romano){

int contador_I = 0, contador_V = 0, contador_X = 0, contador_L = 0, contador_C = 0, contador_D = 0, contador_M = 0;
int tamanho = strlen(num_romano);

  for(int i=0;i<tamanho;i++){
    if(num_romano[i] == 'I') contador_I++;
    if(num_romano[i] == 'V') contador_V += 5;
    if(num_romano[i] == 'X') contador_X += 10;
    if(num_romano[i] == 'L') contador_L += 50;
    if(num_romano[i] == 'C') contador_C += 100;
    if(num_romano[i] == 'D') contador_D += 500;
    if(num_romano[i] == 'M') contador_M += 1000;
  }

  if(contador_I >= 3 and contador_V > 2){
    return -1;
    }
    else{
      return contador_I;
    }

  return -1;
}
 