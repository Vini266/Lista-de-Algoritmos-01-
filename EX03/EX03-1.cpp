//Exercicio 03

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int a, b;
	printf("Uma bomba de neutronios � capaz de destruir uma �rea igual � 10 ua�.\n");
	printf("Partindo desse pressuposto, indique uma �rea para estimar a quantidade de bombas necess�rias para destru�-la: \n");
	scanf("%d", &a);
	b= a/10;
	printf("A quantidade m�nima de bombas necess�rias para destruir essa �rea � de: %i", b);
	
	
	
}
