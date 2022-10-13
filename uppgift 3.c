#include <stdio.h>
/********************************************************************************
*electrical_print: Skriver ut angivna storheter i terminalen.
********************************************************************************/
static void electrical_print(double voltage,
                             double current,
                             double resistance)

{
	printf("--------------------------------------------------------------------------------\n");
	printf("Voltage: %lg V\n", voltage);
	printf("Current: %lg mA\n", current);
	printf("Resistance: %lg kOhm\n", resistance);
	printf("--------------------------------------------------------------------------------\n\n");
	return;
}

/****************************************************************************************
* electrical_set: Tilldelar värden på våra variabler. x, y och z utgör lokala pekare, som
* pekar på adressen till dess variabel.Via *x,*y och *z genomförs skivning till variablerna
* indirekt via våra pekare.
****************************************************************************************/
static void electrical_set(double* x,
	                       double* y,
	                       double* z)
{
	*x = 3.4;
	*y = 6.8;
	*z = *x / *y;
}


/****************************************************************************************
* Funktionen main är programmets startpunkt. Double används då vi har flyttal. Våra variablers 
* värden tilldelas ej vid start, utan i electricalt_set som anropas efter main.
* För att åtsadkomma detta passeras adressen till våra variablar vid anropet (& täcknet används).
* slutligen görs en utskrift av innehållet som är lagrat i variablerna via anrop av funktionen
* electrical_print.
****************************************************************************************/
int main(void)
{
	double voltage = 0;
	double current = 0;
	double resistance = 0;

	electrical_set(&voltage, &current, &resistance);
	electrical_print(voltage, current, resistance);
		
	
	return 0;
}
