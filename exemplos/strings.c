#include <stdio.h>
#include <string.h> //biblioteca que inclui strings

int main() {
    char saudacao[50] = "hello world!";
    char nome[20];

    //copiando uma string (não pode usar = para strings)
    strcpy(nome, "Isabella");

    printf("saudação: %s\n", saudacao);
    printf("nome: %s\n", nome);

    return 0;
}