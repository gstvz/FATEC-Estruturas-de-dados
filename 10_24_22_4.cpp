// Crie um programa que calcule o maximo divisor comum entre 2 numeros usando a recursao.

#include <stdio.h>

int calc_mdc(int num1, int num2) {
    if (num2 == 0) return num1;

    return calc_mdc(num2, num1 % num2);
}

int main() {
	int num1, num2, mdc;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	mdc = calc_mdc(num1, num2);
	
	printf("O MDC entre %d e %d e: %d", num1, num2, mdc);
	
	return 0;
}
