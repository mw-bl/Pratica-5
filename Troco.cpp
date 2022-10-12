#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int d, troco;
	
	printf("Troco\n");
	
	printf("\nDigite o valor que foi inserido na máquina: ");
	scanf("%d", &d);
	
	troco = d % 7;
	
	printf("O valor perdido foi: %d", troco);
	
	return 0;
}
