#include <stdio.h>

int main() {
  float m;

  printf("insira uma nota:\n");
  scanf("%f", &m);

  if(m >= 7.0) {
    printf("aluno aprovado! \n");
  } else {
    printf("aluno reprovado! \n");
  }
}