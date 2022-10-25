// Crie um programa que calcule o fatorial de um numero usando recursao.

#include <stdio.h>

int calc_fat(int num) {
	int fatorial;
	
	if (num == 0 || num == 1) return 1;
	
	fatorial = num * calc_fat(num - 1);
}

int main() {
	int num;
	int fatorial;
	
	printf("Insira um numero para calcular o fatorial: ");
	scanf("%d", &num);
	
	fatorial = calc_fat(num);
	
	printf("O fatorial de %d e: %d", num, fatorial);	
	
	return 0;
}
