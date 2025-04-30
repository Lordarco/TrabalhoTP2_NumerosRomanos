//Implementação da função que converte números romanos.

#include "romanos.hpp"
#include <cstring>

int romanos_para_decimal(char const * num_romano){

int contador_I = 0;
int tamanho = strlen(num_romano);

  
  for(int i=0;i<tamanho;i++){
    if(num_romano[i] == 'I') contador_I++;
  }
  
  if(strcmp(num_romano, "V") == 0){
    return 5;
  }
  else if (strcmp(num_romano, "X") == 0)
  {
    return 10;
  }
  else if (strcmp(num_romano, "L") == 0)
  {
    return 50;
  }
  else if (strcmp(num_romano, "C") == 0)
  {
    return 100;
  }
  else if (strcmp(num_romano, "D") == 0)
  {
    return 500;
  }
  else if (strcmp(num_romano, "M") == 0)
  {
    return 1000;
  }
  if(contador_I > 3){
    return -1;
    }
    else{
      return contador_I;
    }

  return -1;
}
 