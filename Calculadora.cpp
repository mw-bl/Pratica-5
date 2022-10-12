#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m, w, multiplicacao, divisao, adicao, subtracao;
	
	printf("Calculadora.\n\n");
	
	printf("Digite o primeiro número: ");
	scanf("%f", &m);
	
	printf("Digite o segundo número: ");
	scanf("%f", &w);
	
	multiplicacao = m*w;
	printf("\n\nO resultado da multiplicação é: %.2f \n", multiplicacao);
	
	divisao = m/w;
	printf("\nO resultado da divisão é: %.2f\n", divisao);	
	
	adicao = m+w;
	printf("\nO resultado da adição é: %.2f\n", adicao);
	
	subtracao = m-w;
	printf("\nO resultado da subtração é: %.2f\n", subtracao);
	
	return 0;
}
