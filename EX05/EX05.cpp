//Exercicio 05

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	float ki, kf, dp, cc, gc;
	
	printf("Qual a posição inicial da nave espacial? \n");
	scanf("%f", &ki);
	printf("Qual a posição final da nave espacial? \n");
	scanf("%f", &kf);
	dp= kf-ki;
	printf("Qual foi o consumo de energia da nave espacial?");
	scanf("%f", &cc);
	printf("A distância percorrida pela nave espacial foi: %f \n", dp);
	gc= (dp/cc);
	printf("O gasto de energia é igual a: %f \n", gc);
	
}
