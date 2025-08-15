#include <stdio.h>

int main() {
  int numeros[5] = {10, 20, 30, 40, 50}; //declaração e inicialização

  //acessando e imprimindo o terceiro elemento (índice 2)
  printf("o terceiro elemento é: %d\n", numeros[2]);

  //modificando um elemento
  numeros[4] = 100;
  printf("o último elemento agora é: %d\n", numeros[4]);

  return 0;
}