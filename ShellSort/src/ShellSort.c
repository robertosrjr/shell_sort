/*
 ============================================================================
 Name        : ShellSort.c
 Author      : Roberto S. Ramos Jr
 Version     :
 Copyright   : robertosrjr@gmail.com
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int vec[] = {12, 58, 16, 38, 31, 23, 37, 11, 42, 27, 47, 39};
int tamanho = 12;
int qtd = 0;

int main(void) {
	puts("Algoritmos e Estrutura de Dados em C - Shell Sort"); /* prints Algoritmos e Estrutura de Dados em C - Shell Sort */

	int qtde = 0;
	printf("Imprimir vector: ");
	print_vector();
	printf("\n");

	qtde = shellSort(vec, tamanho);
	printf("Imprimir vector ordenado: ");
	print_vector();
	printf("\n");

	printf("Quantidade de Iterações: %d", qtde);

	return EXIT_SUCCESS;
}

int shellSort(int vec[], int tam) {

	int i , j , value;
    int gap = 1;
    while (gap < tam) {

        gap = 3 * (gap + 1);
    }
    while ( gap > 1) {

    	gap /= 3;
    	for (i = gap; i < tam; i++) {

    		value = vec[i];
    		j = i;
    		while (j >= gap && value < vec[j - gap]) {

    			vec[j] = vec [j - gap];
    			j = j - gap;
    			qtd++;
    		}
    		vec [j] = value;
    	}
    }
    return (qtd);
}

void print_vector() {

	int i;
	for (i = 0; i < tamanho -1; i++) {

		printf("%d, ", vec[i]);
	}
}
