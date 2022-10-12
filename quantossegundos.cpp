#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m, minutos, segundos;
	
	printf("Quantos segundos?\n\n");

	printf("Digite o número de minutos: ");
	scanf("%f", &m);
	
	segundos = m * 60;
	
	printf("O resultado em segundos é: %.2f", segundos);;
	
	return 0;	
}
