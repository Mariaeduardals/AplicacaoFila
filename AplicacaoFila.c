#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AplicacaoFila.h"

	//Fiz como exemplo para uma aplicação de uma estrutura de dados, uma fila hospitalar, onde cada vez que alguém é
	//atendido sai da fila e o proximo fica sendo o primeiro. Um exemplo simples mas que exemplifica a utiização da estrutura
	// de dados fila.Peguei como base algumas ideias de questões anteriores para essa exemplificação para que ficasse de
	// uma maneira mais organizada. Criei uma fila, fiz um vetor de dados para facilitar a inserção na fila,
	// implementei também o remover, o size para mostrar a quatidade de pessoas na fila, o first para mostrar
	// o proximo que vai ser atendido, no caso porque ele mostra o elemento 0 que é o primeiro da fila.
	// Funcções printALl pra exibir a fila, o isEmpty para dizer se a fila está vazia e o clear pra remover tudo.
		
		
		struct dados{
			char* nome;
			char* motivo;
			int senha;
		};
		
		struct fila {
				int max;
				int contador; 
				Dados** vetor; 
				
			};
			
			Dados* novoDados(char* nome, char* motivo, int senha){ //3
					Dados *d = (Dados*) malloc(sizeof(Dados)); //2
					d->nome = calloc(sizeof(char), 45); //1
					strcpy(d->nome, nome); //1
					d->motivo = calloc(sizeof(char), 45); //1
					strcpy(d->motivo, motivo); //1
					d->senha = senha; //1
					return d; //1
						//Complexidade temporal - O(7) e espacial - O(4) = O(c). Constante.
				}
				
			Fila* create(int n){ //1
				
				Fila *fi = (Fila*) malloc(sizeof(Fila)); //1
				if(fi == NULL){ //1
					return NULL; //1
				}else{	
					fi->vetor = (Dados**) malloc( n* sizeof(Dados)); //1
					fi->max = n; //1
					return fi;  //1
				}
				fi->contador = 0; //1
				
					//Complexidade temporal - O(7) e espacial - O(1) = O(c). Constante.
			}	
			
			void inserir(Fila *fi, Dados* d){ //1 //1
			
			if(fi->contador < fi->max ){ //1
				fi->vetor[fi->contador] = d; //1
				fi->contador++; //1
			}
				//Complexidade temporal - O(3) e espacial - O(2) = O(c). Constante.
		}	
		
			int remover(Fila *fi){ //1
				int i = 0; //1
				//Complexidade espacial - O(2) = O(c). Constante.
				
				if(fi != NULL && !isEmpty(fi)){ //1
					fi->vetor[0] = NULL; //1
					
				for(i = 0; i < fi->contador; i = i+1 ){ //n
					fi->vetor[i] = fi->vetor[i + 1]; //1
			
				}
				
				fi->contador--;	//1
				return 1;	//1
				
				}else{
					return 0; //1
				}
				//Complexidade temporal - O(6 + n) = O(n). linear.
			}
			
			int size(Fila *fi){ //1
			if(fi->contador <= fi->max) //1
				return fi->contador; //1
				//Complexidade temporal - O(2) e espacial - O(1) = O(c). Constante.
		}
			int first(Fila *fi){//1
				if(fi != NULL && ! isEmpty(fi)){ //1
					return fi->vetor[0]->senha; //1
				}else{
					return 0; //1
				}
					//Complexidade temporal - O(3) e espacial - O(1) = O(c). Constante.
			}
			
			int printAll(Fila *fi){  //1
			int i;
			for(i = 0; i < fi->contador; i++){ //n
				printf("%s - senha %d \nMotivo consulta: %s\n\n", fi->vetor[i]->nome, fi->vetor[i]->senha, fi->vetor[i]->motivo); //1
			}
				//Complexidade temporal - O(n) -> linear . Complexidade Espacial - O(1) = O(c). Constante.
		}
			
			int isEmpty(Fila *fi){ //1
			if( fi == NULL ){ //1
				return 1;//1
			}
			if(fi->contador <= 0){ //1
			return 1; //1
			}else{
				return 0; //1
			}
				//Complexidade temporal - O(5) e espacial - O(1) = O(c). Constante.
			
		}
		int clear(Fila *fi){ //1
			int i; //1
			printf("... Todos foram atendidos !!\n\n"); //1
			if(fi != NULL){ //1
			for(i = 0; i < fi->contador; i++){//n
				fi->vetor[i] = NULL; //1
			}
				free(fi);//1
				return 1; //1
			}else{
				return 0; //1
			}
				//Complexidade temporal - O(6 + n) -> linear. Complexidade espacial - O(2) = O(c). Constante.
		}
		

