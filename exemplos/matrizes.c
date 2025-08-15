#include <stdio.h>

int main() {
  int matriz[2][3] = {
    {1, 2, 3}, //linha 0
    {4, 5, 6}  //linha 1
  };

  //acessando e imprimindo o elemento na linha 1, coluna 2
  printf("elemento na linha 1, coluna 2: %d\n", matriz[1][2]); //o valor de retorno é 6

  return 0;
}