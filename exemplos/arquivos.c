#include <stdio.h>
#include <stdlib.h> //necessário para a função exit()
#include <string.h>

int main() {
  FILE *arquivo;
  char buffer[256];

  //--- PARTE 1: ESCREVER NO ARQUIVO ---
  //abrir o arquivo para escrita ("w" = write)
  //se o arquivo não existir, ele é criado. se existir, ele é sobrescrito.
  arquivo = fopen("exemplo.txt", "w");

  //verificar se a abertura do arquivo foi bem-sucedida
  if (arquivo == NULL) {
    printf("erro ao abrir o arquivo. \n");
    return 1; //retorna um código de erro
  }

  //escrever uma string no arquivo
  fprintf(arquivo, "olá, este é um exemplo de arquivo. \n");
  fprintf(arquivo, "o número do exemplo é: %d\n", 123);

  //fechar o arquivo para salvar as alterações
  fclose(arquivo);
  printf("o arquivo foi fechado e as alterações foram salvas! \n");

  //--- PARTE 2: LER O ARQUIVO ---
  //abrir o mesmo arquivo para leitura ("r" = read)
  arquivo = fopen("exemplo.txt", "r");

  //verificar se a abertura do arquivo foi bem-sucedida
  if (arquivo == NULL) {
    printf("erro ao abrir o arquivo. \n");
    return 1; //código de erro
  }

  printf("\nlendo o conteúdo do arquivo: \n");

  //ler e imprimir cada linha do arquivo até o final
  //fgets lê uma linha inteira por vez
  while(fgets(buffer, sizeof(buffer), arquivo) != NULL) {
    printf("%s", buffer);
  }

  //fechar o arquivo
  fclose(arquivo);
  printf("leitura do arquivo concluída. \n");

  return 0;
}