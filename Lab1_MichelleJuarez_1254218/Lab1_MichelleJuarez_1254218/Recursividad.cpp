#include "Recursividad.h"

Recursividad::Recursividad()
{

}

int Recursividad::Fibonacci(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return (Fibonacci(num - 1) + Fibonacci(num - 2));
	}
}

int Recursividad::Factorial(int num2)
{
	if (num2 == 0)
	{
		return 1;
	}
	else
	{
		return num2*Factorial(num2-1);
	}
}

int Recursividad::Binario(int cociente, int divisor)
{
	if (cociente==1)
	{
		return (1);
	}
	else
	{
		return Binario((divisor / 2), cociente);
		if (divisor % 2 == 0)
		{
			return (0);
		}
		if (divisor % 2 != 0)
		{
			return (1);
		}
		
	}
}