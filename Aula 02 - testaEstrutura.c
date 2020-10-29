/* Neste código, é criado um tipo struct contendo dois dois ints,
c1 e c2, que pode ser invocado por TESTE para a alteração de 
seu conteúdo, ou *PONT para a alteração de seu endereço de memória.

O método copiar passa como parâmetro t1, que é do tipo TESTE. Nele 
é criado o ponteiro x, que logo no inicio é alocado para blocos de 
endereço para o tipo PONT. Em seguida, o endereço de x recebe o conteúdo
contido em t1, efetuando a cópia.

No main, é criado a variável y do tipo TESTE, que recebe 10 em y.c1 e 22
em y.c2. Seguidamente, a variável w do tipo PONT é criada e nela é armazenado
o resultado da invocação da função copiar, que recebeu y por parâmetro.
Finalmente, quando printados os valores de w.c1 e w.c2, eles são, respectivamente,
10 e 22.*/

#include <stdio.h>
#include <malloc.h>

typedef struct{
  int c1;
  int c2;
} TESTE, *PONT;

PONT copiar(TESTE t1){
	PONT x = (PONT) malloc(sizeof(TESTE));
	*x = t1;
	return x;
}

int main(){
	TESTE y;
	y.c1 = 10;
	y.c2 = 22;
	PONT w = copiar(y);
	printf("c1: %i, c2: %i\n", w->c1, w->c2);
	return 0;
}

/*
c1: 10, c2: 22
*/
