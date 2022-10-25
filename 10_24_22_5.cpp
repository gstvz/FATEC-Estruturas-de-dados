#include <stdio.h>
#include <string.h>
#include <cstdlib>

struct Produto {
    char nome[30]; // Nome do produto;
    int codigo; // Código do produto;
    double preco; // Preco do produto;
};

int main() {
    struct Produto produtos[10];
    int i;

    strcpy(produtos[0].nome,"Pe de Moleque");
    produtos[0].codigo = 13205;
    produtos[0].preco = 0.20;

    strcpy(produtos[1].nome,"Cocada Baiana");
    produtos[1].codigo = 15202;
    produtos[1].preco = 0.50;
	
    struct Produto *ponteiroProdutos;
    ponteiroProdutos = (struct Produto *) malloc(10*sizeof(struct Produto));

    strcpy(ponteiroProdutos[0].nome,"Pe de Moleque");
    ponteiroProdutos[0].codigo = 13205;
    ponteiroProdutos[0].preco = 0.20;

    strcpy(ponteiroProdutos[1].nome,"Cocada Baiana");
    ponteiroProdutos[1].codigo = 15202;
    ponteiroProdutos[1].preco = 0.50;

    for(i = 0; i <= 1; i++) {
        printf("\n\nNome do produto %d: %s",i+1, ponteiroProdutos[i].nome);
        printf("\nCodigo do produto: %d",ponteiroProdutos[i].codigo);
        printf("\nPreco do produto: R$ %.2f", ponteiroProdutos[i].preco);
    }

	return 0;
}
