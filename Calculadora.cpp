#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m, w, multiplicacao, divisao, adicao, subtracao;
	
	printf("Calculadora.\n\n");
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &m);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &w);
	
	multiplicacao = m*w;
	printf("\n\nO resultado da multiplica��o �: %.2f \n", multiplicacao);
	
	divisao = m/w;
	printf("\nO resultado da divis�o �: %.2f\n", divisao);	
	
	adicao = m+w;
	printf("\nO resultado da adi��o �: %.2f\n", adicao);
	
	subtracao = m-w;
	printf("\nO resultado da subtra��o �: %.2f\n", subtracao);
	
	return 0;
}
