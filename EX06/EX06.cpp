//Exercicio 06

#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	float i1, i2, it, lt, l1, l2;
	
	printf("Qual o valor do investimento da pessoa 1?");
	scanf("%f", &i1);
	printf("Qual o valor do investimento da pessoa 2?");
	scanf("%f", &i2);
	printf("Qual o valor do lucro total obtido pelo investimento?");
	scanf("%f", &lt);
	it= i1+i2;
	l1= (i1*lt)/it;
	l2= (i2*lt)/it;
	printf("O lucro obtido pela pessoa 1 é: %f\n", l1 );
	printf("O lucro obtido pela pessoa 2 é: %f\n", l2 );
	
	
	//divisão proporcional (a/b)=(c/d)= (a+b)/(c+d)
	//l1*it=i1*lt
	//it= i1+i2
	
	
	
}
