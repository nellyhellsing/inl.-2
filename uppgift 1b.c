#include <stdio.h>
/****************************************************************************************
Differensen x – y lagras på den angivna adress z, som passeras vid funktionsanrop.
Differensen efter funktionsanrop lagras på adressen till variabeln c i main.
****************************************************************************************/

void subtract(double x, double y, double* z)
{
	*z = x - y;
}

int main(void)
{
	

		double a = 3.4;
		double b = 6.8;
		double c;

		subtract(a, b, &c);

		printf("%lg - %lg = %lg\n", a, b, c);

		return 0;
}
