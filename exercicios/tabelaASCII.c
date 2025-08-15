#include <stdio.h>

int main() {
  // a tabela ASCII padrão tem 128 caracteres (de 0 a 127).
  //vamos iterar por cada valor.
  //usamos um loop 'for' para isso.
  for(int i=0; i < 128; i++) {
    // 'printf' é uma função da biblioteca padrão para imprimir texto no console.
    // %d imprime o valor decimal de i.
    // %c imprime o caractere correspondente ao valor decimal de i.
    printf("caractere: %c, valor ascii: %d\n", (char)i, i);
  }
  return 0;
}