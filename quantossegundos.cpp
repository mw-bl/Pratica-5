#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m, minutos, segundos;
	
	printf("Quantos segundos?\n\n");

	printf("Digite o n�mero de minutos: ");
	scanf("%f", &m);
	
	segundos = m * 60;
	
	printf("O resultado em segundos �: %.2f", segundos);;
	
	return 0;	
}
