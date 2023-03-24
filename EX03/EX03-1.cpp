//Exercicio 03

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int a, b;
	printf("Uma bomba de neutronios é capaz de destruir uma área igual à 10 ua³.\n");
	printf("Partindo desse pressuposto, indique uma área para estimar a quantidade de bombas necessárias para destruí-la: \n");
	scanf("%d", &a);
	b= a/10;
	printf("A quantidade mínima de bombas necessárias para destruir essa área é de: %i", b);
	
	
	
}
