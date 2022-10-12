#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m, a, imc, resultado;
	
	printf("IMC.\n");
	
	printf("\nDigite o valor da sua massa corporal: ");
	scanf("%f", &m);
	
	printf("Digite o valor da sua altura: ");
	scanf("%f", &a);
	
	imc = m / (a * a);
	
	printf("\nO valor do seu IMC é: %f", imc);
	
	return 0;
}
