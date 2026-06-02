//hola

int suma_digitos(int n1)
{
	if (n1/10==0)
	{
		return n1
	}
	else
	{
		return ((n1 % 10) + digitos(n1 / 10)); //caso recursivo
	}

}
