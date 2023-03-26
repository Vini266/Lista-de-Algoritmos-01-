#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float d, b;
	
	printf("Indique o valor em dólar:\n");
	scanf("%f", &d);
	b= d*336;
	printf("O valor convertido para a moeda Blemflarck, equivale à: %.2f", b);
	
	
	
}
