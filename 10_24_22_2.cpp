// Crie um programa em C que conte os digitos de um determinado numero usando recursividade;

#include <stdio.h>

int num_digitos(int num) {
	static int cont = 0;
	
	if (num != 0) {
		cont++;
		num_digitos(num/10);
	}
	
	return cont;
}

int main() {
	int num, contagem;
	
	printf("Programa para contar os digitos: \n");
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	contagem = num_digitos(num);
	
	printf("O numero %d possui %d digitos.", num, contagem);
	
	return 0;
}

