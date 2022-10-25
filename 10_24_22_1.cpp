// Faca uma rotina recursiva para calcular a somatoria de todos os numeros de 1 a N

#include <stdio.h>
#include <locale.h>

int soma_num(int num) {
	int resultado;
	
	if (num == 1) {
		return 1;
	}
	
	resultado = num + soma_num(num - 1);
}

int main() {
	int num;
	int resultado;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um numero para realizar a somatoria de 1 ate ele: ");
	scanf("%d", &num);
	
	resultado = soma_num(num);
	
	printf("A somatoria de 1 ate %d e: %d", num, resultado);
	
	return 0;
}
