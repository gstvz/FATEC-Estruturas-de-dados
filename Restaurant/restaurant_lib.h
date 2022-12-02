// prototypes

struct restaurant {
	char name[20];
	char address[20];
	char foodType[20];
	int rating;
};

typedef struct listItem* List;

List* createList();
void insertItemOnList(List* list);
void showList(List* li);
