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
} Ticket;

void showInformations(Passenger *passenger, Ticket *ticket) {
  printf("Informações: \n\n");
  printf("Passageiro: %s\n", passenger->name);
  printf("Idade: %d\n", passenger->age);
  printf("Destino: %s\n", ticket->destination);
  printf("Data da viagem: %s\n", ticket->date);
}

void printOptions(int *option, Passenger *passenger, Ticket *ticket) {
  printf("\n\n**********Bem vindo!**********\n");
  printf("Escolha uma das opções abaixo: \n");
  printf("1 - Definir passageiro\n");
  printf("2 - Definir destino e data\n");
  printf("3 - Exibir informações\n");
  printf("0 - Finalizar\n");
  printf("Opção: ");
  scanf("%d", option);
  system("clear");
}

void optionsHandler(int option, Passenger *passenger, Ticket *ticket) {
  switch(option) {
   case 1:
    printf("Digite um nome: \n");
    scanf("%s", &passenger->name);
    printf("Digite a idade: \n");
    scanf("%d", &passenger->age);
    system("clear");
    break;
   case 2:
    printf("Digite o destino: \n");
    scanf("%s", &ticket->destination);
    printf("Digite a data dd/mm/aaaa: \n");
    scanf("%s", &ticket->date);
    system("clear");
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
