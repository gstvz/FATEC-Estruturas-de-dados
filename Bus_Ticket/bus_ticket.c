#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus_lib.h"

int main() {

  int option;
  Passenger passenger;
  Ticket ticket;

  do {
   printOptions(&option, &passenger, &ticket);
   optionsHandler(option, &passenger, &ticket);
  } while (option <= 3 && option != 0);
}
