#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float d, b;
	
	printf("Indique o valor em d�lar:\n");
	scanf("%f", &d);
	b= d*336;
	printf("O valor convertido para a moeda Blemflarck, equivale �: %.2f", b);
	
	
	
}
