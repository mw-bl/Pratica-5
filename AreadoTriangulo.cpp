#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float b, a, areat, resultado;
	
	printf("Área do triângulo.\n");
	
	printf("\nDigite o valor da base: ");
	scanf("%f", &b);
	
	printf("Digite o valor da altura: ");
	scanf("%f", &a);
	
	areat = (b * a) / 2;
	
	printf("\nO valor da base é: %.3f", areat);
	
	return 0;
}
