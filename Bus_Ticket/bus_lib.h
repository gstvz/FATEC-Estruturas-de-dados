// prototypes

typedef struct {
 char name[50];
 int age;
} Passenger;

typedef struct {
 char destination[50];
 char date[11];
 float price;
} Ticket;

void showInformations(Passenger *passenger, Ticket *ticket);

void printOptions(int *option, Passenger *passenger, Ticket *ticket);

void passengerInfoHandler(Passenger *passenger);

void ticketInfoHandler(Ticket *ticket);

void optionsHandler(int option, Passenger *passenger, Ticket *ticket);
