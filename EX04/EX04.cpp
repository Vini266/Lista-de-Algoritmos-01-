//Exercicio 04
//Pi =~ 3,14

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float r, v, c;
	printf("Qual o valor do raio do planeta? \n");
	scanf("%f", &r);
	v= (4*3,14*r*r*r)/3; //Qual o operador de potencia��o?
	c= (2*3,14*r);
	printf ("A circunf�rencia do planeta �: %f\n",c);
	printf("O volume do planeta �: %f \n", v);
	
	
	return 0;
}
