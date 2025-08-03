/*
STRING: vetor de caracteres (char), nos permitindo armazenar palavras inteiras, e não só um caracter por vez. em cada posição do vetor é armazenado um carácter diferente da palavra.

\0 informa a máquina que a string acabou. É o caracter nulo. Ou seja: para 10 caracteres, é preciso ter 11 posições no vetor, em que o último será o \0.


ENTRADA E SAÍDA DE STRINGS

- scanf( )
    - limitações: sintaxe robusta;
    - especificador geral de formato: %s
    - sintaxe geral: scanf(“%s”, <str>); -> aqui não é possível ler após um espaço;
    - sintaxe aprimorada: scanf(“%<tam.-1>[^\n]s”, <str>); -> lê tudo o que vem antes do enter.

- printf( )
    - especificador de formato: %s
    - sintaxe: printf(“<texto>”, <str1>, <str2>, …, <strN>);
*/

#include <stdio.h>

int main() {

  char s[10];

  printf("digite algo (scanf convencional): \n");
  scanf("%s", s);
  fflush(stdin);

  printf("resultado: %s\n\n", s);

  printf("digite algo (scanf aprimorado): \n");
  scanf("%10[^\n]s", s); //tamanho e lê espaços
  fflush(stdin);

  printf("resultado: %s\n\n", s);
}

/*
gets()

  - limitações: estouro no limite do vetor (deixa ler mais caracteres do que o tamanho do vetor)
  - sintaxe: gets(<string>);

fgets()
  - ultimo caractere sempre fica reservado ao '\0'
  - entrada padrão: stdin
  - sintaxe: fgets(<string>, <tam>, stdin);

  STDIN: entrada de dados padrão (ex.: teclado), ou seja, pega um dado do teclado, limita ao tamanho inserido (reservando a última posição ao '\0') e salva na memória.

puts()
  - imprime uma string diretamente na tela;
  - não admite variáveis de outros tipos;
  - sintaxe: puts(<string>);
  - fflush(stdin): chamar sempre depois de uma entrada de dados. É útil pra que quando uma segunda função (gets, fgets) seja usada, a segunda função não use o lixo que fica no buffer e acabe colocando dentro do espaço de armazenamento. 
*/

#include <stdio.h>

int main() {
  char s[10];

  printf("digite algo (leitura pelo gets): \n");
  gets(s);
  fflush(stdin);

  puts("resultado: ");
  puts(s);
  puts("");

  printf("digite algo (leitura pelo fgets): \n");
  fgets(s, 10, stdin);
  fflush(stdin);

  puts("resultado: \n");
  puts(s);
}

/*
BIBLIOTECA string.h
- sintaxes de funções importantes:

  - strcpy(<destino>, <origem>); -> altera a string quando é preciso alterar o conteúdo via código de maneira literal
  - strcat(<destino>, <origem>); -> colar uma string na outra;
  - strlen(<string>); -> mostra o tamanho da string;
  - strcmp(<string>, <string2>); -> compara se a string1 é exatamente igual à string2. se sim, retorna '0'.

BIBLIOTECA locale.h -> permite o uso de acentos.
  - setlocale(LC_ALL, "Portuguese"); 
*/

//STRCPY: ALTERA O CONTEÚDO DA STRING
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20 //constante que controla o tamanho das strings

int main() {
  setlocale(LC_ALL, "Portuguese");

  char origem [N] = {"hello world!"};
  char destino[N];

  printf("antes do strcpy: \n");
  puts(origem);
  puts(destino);

  strcpy(destino, origem);

  printf("depois do strcpy: \n");
  puts(origem);
  puts(destino);
}

//STRCAT: CONCATENAÇÃO DE UMA STRING COM OUTRA
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50 //constante que controla o tamanho das strings

int main() {
  setlocale(LC_ALL, "Portuguese");

  char s1[N] = {"lógica de"};
  char s2[N] = {"programação!"};

  printf("antes do strcat: \n");
  printf("str1: %s\n", s1);
  printf("str2: %s\n", s2);

  strcat(s1, s2);

  printf("depois do strcat: \n");
  puts(s1);
}

//STRLEN: MOSTRA O TAMANHO DO VETOR
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50 //constante que controla o tamanho das strings

int main() {
  setlocale(LC_ALL, "Portuguese");

  char s[N];
  int i;

  printf("digite um texto: \n");
  gets(s);
  i = strlen(s);
  printf("tamanho do texto: %d\n\n", i);

  printf("impressão de posição a posição: \n");
  
  for(i=0; i<strlen(s); i++){
    printf("%c", s[i]);
  }
}

//STRCMP: COMPARA DUAS STRINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50 //constante que controla o tamanho das strings

int main() {
  setlocale(LC_ALL, "Portuguese");

  char hardText[N] = {"/exit"};
  char senha_usr[N];
  int ok;

  printf("digite um texto: \n");
  gets(senha_usr);

  ok = strcmp(hardText, senha_usr);

  if(ok==0)
    printf("textos iguais: \n");
  else
    printf("textos diferentes: \n");
}