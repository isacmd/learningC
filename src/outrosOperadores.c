#include <stdio.h>

int main() {
  
  int dado = 10;
  printf("valor antes do incremento: %d.\n", dado);

  dado++;
  printf("depois do incremento: %d.\n", dado);

  dado--;
  printf("depois do decremento: %d.\n", dado);

  dado += 4;
  printf("depois do incremento genérico: %d.\n", dado);

  dado -= 8;
  printf("depois do decremento genérico: %d.\n", dado);

  dado *= 10;
  printf("depois de atribuir a multiplicação: %d.\n", dado);

  dado /= 5;
  printf("depois de atribuir a divisão: %d.\n", dado);
}