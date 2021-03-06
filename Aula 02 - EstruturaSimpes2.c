/*Esse código, assim como o EstruturaSimples.c,  há a definição de biblioteca
e de uma variável global altura máxima e a criação uma struct PesoAltura, 
que contém dois inteiros que armazenam peso e altura. 
O diferencial aqui é a definição da biblioteca malloc.h.
No método principal é criado um inteiro x, um ponteiro do tipo PesoAltura 
pessoa1. É impresso o valor do endereço de memoria de pessoa1 e logo em 
seguida feita a alocação dinâmica do endereco de pessoa1 de acordo com o
tamanho do seu tipo PesoAltura. 
É impresso os conteúdos de pessoa1->peso e pessoa1->altura, na proxima 
linha são atribuidos  novos valores às variáveis e novamente impressos
seus conteúdos. 
No final é feita uma verificação para saber se a altura esta acima ou 
abaixo da AlturaMaxima e impressos os endereços de x, pessoa1 e o 
endereço que aponta pessoa1.

*/

#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225

typedef struct
{
  int peso;   // peso em quilogramas
  int altura; // altura em centimetros
} PesoAltura;

int main() {
  int x;
  PesoAltura* pessoa1;
  printf("Valor inicial do endereco: %p\n", pessoa1);
  pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
  printf("Peso: %i, Altura %i. ", pessoa1->peso, pessoa1->altura);
  pessoa1->peso = 80;
  pessoa1->altura = 185;

  printf("Peso: %i, Altura %i. ", pessoa1->peso, pessoa1->altura);
  if (pessoa1->altura>alturaMaxima) {
    printf("Altura acima da maxima.\n");
  }
  else printf("Altura abaixo da maxima.\n");

  printf("Enderecos: %p %p %p\n", &x, &pessoa1, pessoa1);
 
  return 0;
}

/*
Valor inicial do endereço: (nil)
Peso: 0, Altura 0. Peso: 80, Altura 185. Altura abaixo da maxima.
Endereços: 0x7ffde9c33f74 0x7ffde9c33f78 0x1f50010
*/
