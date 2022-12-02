// implementation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "restaurant_lib.h"

struct listItem {
	struct restaurant itemData;
	struct listItem* nextItem;
};

typedef struct listItem Item;

List* createList() {
	List* list = (List*) malloc(sizeof(List));
	
	if(list != NULL) *list = NULL;
	
	return list;
}

void insertItemOnList(List* list) {
	system("cls");
	if(list == NULL) return;
	
	Item* node = (Item*) malloc(sizeof(Item));
	
	if(node == NULL) return;
	
	printf("Cadastro de restaurante.\n");
	printf("Nome: ");
	fflush(stdin);
	fgets(node->itemData.name, 20, stdin);

	printf("\nTipo de culinaria: ");
	fflush(stdin);
	fgets(node->itemData.foodType, 20, stdin);
	
	printf("\nInforme o endereco: ");
	fflush(stdin);
	fgets(node->itemData.address, 20, stdin);
	
	printf("\nIndique a nota:\n");
	printf("0 - Horrivel;\n");
	printf("1 - Ruim;\n");
	printf("2 - Razoavel;\n");
	printf("3 - Bom;\n") ;
	printf("4 - Muito bom;\n");
	printf("5 - Excelente/Espetacular\n");
	fflush(stdin);
	scanf("%d", &node->itemData.rating);

	node->nextItem = NULL;
	
	if(*list == NULL) {
		*list = node;
	} else {
		Item* aux = *list;
		
		while(aux->nextItem != NULL) {
			aux = aux->nextItem;
		}
		
		aux->nextItem = node;
	}
		
	printf("Restaurante cadastrado!\n\n");
	Sleep(1000);
	system("cls");
	
	return;
}

void showList(List* list) {
	system("cls");
	
	if(list == NULL) return;
	
	Item* aux = *list;
	
	while(aux != NULL) {
		printf("%s\n", aux->itemData.name);
		printf("Tipo de culinaria: %s\n", aux->itemData.foodType);
		printf("Endereco: %s\n", aux->itemData.address);
		printf("Avaliacao: %d\n", aux->itemData.rating);
		printf("\n------------------------------------------------ \n\n");
		aux = aux->nextItem;
	};
	
	return;
}
