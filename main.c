//hola
#include <stdio.h>
int suma_digitos(int n1);
int main(void)
{
	printf("%d", suma_digitos (1324));
}
int suma_digitos(int n1)
{
	if (n1/10==0)
	{
		return n1;
	}
	else
	{
		return ((n1 % 10) + digitos(n1 / 10)); //caso recursivo
	}

}


