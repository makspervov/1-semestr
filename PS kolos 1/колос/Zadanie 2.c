/*Pervov Maksym, grupa 1.8/15
Zadanie 2*/
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
	double p, v, r;	
	printf("Wpisz wartosc r: ");
	scanf("%lf", &r);
	v = 4.0 / 3.0 * PI * pow(r, 3);
	p = 4.0 * PI * pow(r, 2);
	printf("Pole kuli = %lf", p);
	printf("Objetnosc kuli = %lf", v);
	return 0;
}

