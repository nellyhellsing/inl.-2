#include <stdio.h> /* inkluderingsdirektiv */

/********************************************************************************
* För att få vår utskrift i fallande ordning vill vi flytta de tal med större värde 
* till vänster, medans de tal med lägre värde, ska hamna till höger. För att uppnå
* detta behöver vi jämföra varje element i arrayen och justera om de inte är i ordning.
* Processen fortgår tills de högsta värdet är till vänster och därefter i fallande
* ordning till de lägsta värdet som ligger till sist.
********************************************************************************/


void sort(double data[], double size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++) 
		{
			if (data[j] < data[j + 1]) /* vi kollar om värdet till höger är större än det till vänster om det är det, 
				                      så byter vi plats på värdena. (Sätt < åt andra hållet för att få minst till störst tal.)*/
			{
				double temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}

    }
}
void printdata(double data[], double size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%lg\n", data[i]);
	}
}
int main(void)
{
	double data[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };
	int size = sizeof(data) / sizeof(data[0]); /*size är antalet element i arrayen. */
	sort(data, size);
	printdata(data, size);

	return 0;
}

