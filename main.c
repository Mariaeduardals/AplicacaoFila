#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AplicacaoFila.h"


int main() {
	
	int n = 5;
	
	Fila *fi = create(n);
	
	printf("Fila hospitalar.\n\n");
	
	inserir(fi, novoDados("Maria","dor de cabeca", 12));
	inserir(fi, novoDados("Joao", "covid", 13));
	inserir(fi, novoDados("Rafael", "dor de garganta", 14));
	inserir(fi, novoDados("Sandra", "consulta de rotina", 16));

	printAll(fi);

	printf("Proximo a ser atendido : senha %d\n\n",first(fi));

	printf("%d pessoas para serem atendidas.\n\n", size(fi));

	remover(fi);
	
	printAll(fi);  
	
	printf("Proximo a ser atendido : senha %d\n\n",first(fi));
	
	printf("%d pessoas para serem atendidas.\n\n", size(fi));	
	
	remover(fi);
	
	printAll(fi);  
	
	printf("Proximo a ser atendido : senha %d\n\n",first(fi));
	
	printf("%d pessoas para serem atendidas.\n\n", size(fi));
	
	clear(fi);
	
	printf("Se a fila estiver vazia retorna 1, zero caso contrario: %d",isEmpty(fi));
	
	return 0;
}
