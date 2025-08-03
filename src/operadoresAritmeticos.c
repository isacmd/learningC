#include <stdio.h>

int main() {
  int a, b, soma, sub, mult, divs;

  printf("digite o primeiro número:\n");
  scanf("%d", &a);
  printf("digite o segundo número:\n");
  scanf("%d", &b);  

  soma = a + b;
  sub = a - b;
  mult = a * b;
  divs = a / b;

  printf("resultados:\n");
  printf("soma: %d.\n", soma);
  printf("subtração: %d.\n", sub);
  printf("divisão: %d.\n", divs);
  printf("multiplicação: %d.\n", mult);
}