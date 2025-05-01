//Implementação da função que converte números romanos.

#include "romanos.hpp"
#include <cstring>

int valor_romano(char c) {
  switch (c) {
      case 'I': return 1;
      case 'V': return 5;
      case 'X': return 10;
      case 'L': return 50;
      case 'C': return 100;
      case 'D': return 500;
      case 'M': return 1000;
      default: return -1;
  }
}

int romanos_para_decimal(char const * num_romano){

int contador_I = 0, contador_V = 0, contador_X = 0, contador_L = 0, contador_C = 0, contador_D = 0, contador_M = 0;
int tamanho = strlen(num_romano);
int total = 0;


for(int i = 0; i < tamanho;i++){
  int atual = valor_romano(num_romano[i]);
  int proximo = valor_romano(num_romano[i+1]);

  if (num_romano[i] == 'I'){
    contador_I++;
    if(atual < proximo){
      total += proximo - atual;
      i++;
    } 
    else total += 1;
  }  
  else if(num_romano[i] == 'V'){
    contador_V++;
    if(atual < proximo){
      total += proximo - atual;
      i++;
    }
    else total += 5;
  }
  else if(num_romano[i] == 'X'){
    contador_X ++;
    if(atual < proximo){
      total += proximo - atual;
      i++;
    }
    else total += 10;
  }
  else if(num_romano[i] == 'L'){
     contador_L ++;
     if(atual < proximo){
      total += proximo - atual;
      i++;
    }
    else total += 50;
  }
  else if(num_romano[i] == 'C'){
    contador_C ++;
    if(atual < proximo){
      total += proximo - atual;
      i++;
    }
    else total += 100;
  }
  else if(num_romano[i] == 'D'){
    contador_D ++;
    if(atual < proximo){
      total += proximo - atual;
      i++;
    }
    else total += 500;
  }
  else if(num_romano[i] == 'M'){
    contador_M ++;
    if(atual < proximo){
      total += proximo - atual;
      i++;
    }
    else total += 1000;
  }
}

if(contador_I > 3 || contador_V > 1 || contador_X > 3 || contador_L > 1 || contador_C > 3 || contador_D > 1 || contador_M > 3) {
  return -1;
}


return total;
}

 