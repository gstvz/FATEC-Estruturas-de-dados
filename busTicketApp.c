#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
 char name[50];
 int age;
} Passenger;

typedef struct {
 char destination[50];
 char date[11];
 float price;
} Ticket;

void showInformations(Passenger *passenger, Ticket *ticket) {
  printf("Informa��es: \n\n");
  printf("Passageiro: %s\n", passenger->name);
  printf("Idade: %d\n", passenger->age);
  printf("Destino: %s\n", ticket->destination);
  printf("Data da viagem: %s\n", ticket->date);
  printf("Pre�o da viagem: %.2f\n", ticket->price);
  system("pause");
  system("clear");
}

void printOptions(int *option, Passenger *passenger, Ticket *ticket) {
  printf("\n\n**********Bem vindo!**********\n");
  printf("Escolha uma das op��es abaixo: \n");
  printf("1 - Definir passageiro\n");
  printf("2 - Definir destino e data\n");
  printf("3 - Exibir informa��es\n");
  printf("0 - Finalizar\n");
  printf("Op��o: ");
  scanf("%d", option);
  system("clear");
}

void passengerInfoHandler(Passenger *passenger) {
	printf("Digite um nome: \n");
	fflush(stdin);
    gets(passenger->name);
    printf("Digite a idade: \n");    ;
    scanf("%d", &passenger->age);
    system("clear");
}

void ticketInfoHandler(Ticket *ticket) {
	printf("Digite o destino: \n");
	fflush(stdin);
    gets(ticket->destination);
    printf("Digite a data dd/mm/aaaa: \n");
    scanf("%s", &ticket->date);
    printf("Digite o valor da passagem: \n");
    scanf("%f", &ticket->price);
    system("clear");
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

int main() {

  int option;
  Passenger passenger;
  Ticket ticket;

  do {
   printOptions(&option, &passenger, &ticket);
   optionsHandler(option, &passenger, &ticket);
  } while (option <= 3 && option != 0);
}
