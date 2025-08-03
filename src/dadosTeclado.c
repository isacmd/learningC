#include <stdio.h>

int main() {

  int idade = 0;
  float peso = 0.0;

  printf("digite uma idade: \n");
  scanf("%d", &idade);

  printf("digite o peso: \n");
  scanf("%f", &peso);

  printf("idade informada: %d.\n", idade);
  printf("peso informado: %f.\n", peso);

}