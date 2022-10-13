#include <stdio.h> /*inkluderingsdirektiv*/

/****************************************************************************************
* Variaberna tilldelas sina värden i main, där c är differensen av flytalen x och y. Funktionen
* subtract anropas där retuvärdet c lagras. Printf skriver ut differensen på formen a-b=c.
****************************************************************************************/

double subtract(double x, double y)
{
	
	return x - y; 
}


int main(void)
{
	
	double a = 3.4;
    double b = 6.8;
	double c = subtract(a, b);
	

	printf("%lg - %lg = %lg", a, b, c);
	
	return 0;
}
