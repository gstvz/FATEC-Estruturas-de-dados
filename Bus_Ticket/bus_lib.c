// implementation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus_lib.h"

void showInformations(Passenger *passenger, Ticket *ticket) {
  printf("Informacoes: \n\n");
  printf("Passageiro: %s\n", passenger->name);
  printf("Idade: %d\n", passenger->age);
  printf("Destino: %s\n", ticket->destination);
  printf("Data da viagem: %s\n", ticket->date);
  printf("Preco da viagem: %.2f\n", ticket->price);
  system("pause");
  system("cls");
}

void printOptions(int *option, Passenger *passenger, Ticket *ticket) {
  printf("\n\n**********Bem vindo!**********\n");
  printf("Escolha uma das opcoes abaixo: \n");
  printf("1 - Definir passageiro\n");
  printf("2 - Definir destino e data\n");
  printf("3 - Exibir informacoes\n");
  printf("0 - Finalizar\n");
  printf("Opcaoo: ");
  scanf("%d", option);
  system("cls");
}

void passengerInfoHandler(Passenger *passenger) {
	printf("Digite um nome: \n");
	fflush(stdin);
    gets(passenger->name);
    printf("Digite a idade: \n");    ;
    scanf("%d", &passenger->age);
    system("cls");
}

void ticketInfoHandler(Ticket *ticket) {
	printf("Digite o destino: \n");
	fflush(stdin);
    gets(ticket->destination);
    printf("Digite a data dd/mm/aaaa: \n");
    scanf("%s", &ticket->date);
    printf("Digite o valor da passagem: \n");
    scanf("%f", &ticket->price);
    system("cls");
}

void optionsHandler(int option, Passenger *passenger, Ticket *ticket) {
  switch(option) {
   case 1:
	passengerInfoHandler(passenger);    
    break;
   case 2:
	ticketInfoHandler(ticket);
    break;
   case 3:
    showInformations(passenger, ticket);
    break;
   case 0:
    break;
  }
}
