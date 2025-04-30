//Implementação da função que converte números romanos.

#include "romanos.hpp"
#include <cstring>

int romanos_para_decimal(char const * num_romano){

int contador_I = 0, contador_V = 0, contador_X = 0, contador_L = 0, contador_C = 0, contador_D = 0, contador_M = 0;
int tamanho = strlen(num_romano);
int total = 0;


for(int i = 0; i < tamanho ;i++){
  if (num_romano[i] == 'I'){
    contador_I++;
    total += 1;
  }
  else if(num_romano[i] == 'V'){
    contador_V++;
    total += 5;
  }
  else if(num_romano[i] == 'X'){
    contador_X ++;
    total += 10;
  }
  else if(num_romano[i] == 'L'){
     contador_L ++;
     total += 50;
  }
  else if(num_romano[i] == 'C'){
    contador_C ++;
    total += 100;
  }
  else if(num_romano[i] == 'D'){
    contador_D ++;
    total += 500;
  }
  else if(num_romano[i] == 'M'){
    contador_M ++;
    total += 1000;
  }
}

if(contador_I > 3 || contador_V > 1 || contador_X > 3) {
  return -1;
}


return total;

}
 