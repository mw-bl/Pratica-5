#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float a, b, c, form1, form2, form3, form4;
	
	printf("O homem que calculava.\n");
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &a);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &b);
	
	printf("Digite o terceiro n�mero: ");
	scanf("%f", &c);
	
	form1 = (a * b) / c;
	printf("\nO resultado foi: %f", form1);
	
	form2 = ((a*a) + (a*a)) + 5 * c;
	printf("\nO resultado foi: %f", form2);
	
	form3 = (a * b * c) + b + (c / 3) * (5 - 1);
	printf("\nO resultado foi: %f", form3);
	
	form4 = ((a * b * c) * (a * b * c) * (a * b * c)) / 2;
	printf("\nO resultado foi: %f", form4);
		
	return 0;
}
