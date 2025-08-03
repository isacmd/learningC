#include <stdio.h>

int main() {

  int i;

  for(i=1; i<10; i++) {
    if(i == 5) {
      continue; //quando o i vale 5, ele nao é impresso na tela porque o programa ignora e vai pra próxima iteração, que é voltar para o loop
    }
    printf("%d", i);
  }
}