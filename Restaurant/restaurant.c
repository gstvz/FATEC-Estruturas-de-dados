/*
Crie uma struct para descrever restaurantes. 
Os campos devem armazenar o nome do restaurante, o endereco, o tipo de comida e classifica-lo com uma nota para a cozinha (entre 0 e 5).

Crie uma lista encadeada com esta struct e escreva um programa que:
a) Insira um novo restaurante na lista e o seu respectivo endereco;

b) Adicione uma nota para a cozinha do restaurante (0 a 5, sendo 0 - Horrivel; 1 -  Ruim; 2 - Razoavel; 3 - Bom; 4 - Muito bom; 5 - Excelente/ Espetacular);

c) Acrescente ao restaurante, alem da nota da cozinha, o tipo de comida que e oferecida (brasileira, chinesa, francesa, italiana, japonesa etc);

d) Liste todos os restaurantes cadastrados para exibir as informacoes.

*/

#include <stdio.h>
#include "restaurant_lib.h"

// main program

int main() {
	int option;
	List* list = createList();
	
	do {
		printf("Selecione uma acao:\n");
		printf("1 - Cadastrar restaurante;\n");
		printf("2 - Listar restaurantes;\n");
		printf("3 - Sair.\n");
		scanf("%d", &option);
		
		switch(option) {
			case 1:
				insertItemOnList(list);
				break;
			case 2:
				showList(list);
				break;
			case 3: 
				break;
			default: printf("Op��o invalida!\n");
				
		}
	} while(option != 3);
};
