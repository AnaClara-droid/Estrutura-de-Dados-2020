/*No código abaixo, há a definição de biblioteca e de uma variável global altura máxima.
Logo em seguida é criada uma struct PesoAltura, que contém dois inteiros que armazenam
peso e altura.
No método principal foram cridos o inteiro x e o tipo PesoAltura pessoa1. Em pessoa1.peso
foi atribuido o valor 80 e em pessoa.altura, 185. 
Em seguida, há um comando printf que imprime " Peso: 80, Altura: 185." 
Caso pessoa.altura for maior que a altura máxima, será impresso "Altura acima da maxima.\n".
No caso em questão, a mensagem impressa é "Altura abaixo da maxima.\n" pois 185<225.
O último printf imprime os endereços das variáveis x, pessoa1 e pessoa1.altura, respectivamente.
O programa é encerrado com o return 0. */

#include <stdio.h>
#define alturaMaxima 225

typedef struct
{
  int peso;   // peso em quilogramas
  int altura; // altura em centimetros
} PesoAltura;

int main() {
  int x;
  PesoAltura pessoa1;
  pessoa1.peso = 80;
  pessoa1.altura = 185;

  printf("Peso: %i, Altura %i. ", pessoa1.peso, pessoa1.altura);
  if (pessoa1.altura>alturaMaxima) {
    printf("Altura acima da maxima.\n");
  }
  else printf("Altura abaixo da maxima.\n");

  printf("%p %p %p\n", &x, &pessoa1, &(pessoa1.altura));
 
  return 0;
}

/*
Peso: 80, Altura 185. Altura abaixo da maxima.
0x7ffc84b3daec 0x7ffc84b3daf0 0x7ffc84b3daf4
*/
