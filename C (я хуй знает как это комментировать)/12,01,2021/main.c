#include <stdio.h>
struct product{
	char nazwa[20];
	float cena;
	char firma[20];
};
int main(){
	struct product p1;
	struct product *wsk=&p1;
	
	printf("Podaj nazwe: "); gets(p1.nazwa);
	printf("Podaj cene: "); scanf("%f", &p1.cena);
	printf("Podaj firma: "); gets(p1.firma);
	printf("Podano dane:\nNazwa: %s\nCena: %f\nFirma: %s\n", p1.nazwa, &p1.cena, p1.firma);
	
/*	printf("Podaj nazwe: "); gets(p1.nazwa);
	printf("Podaj cene: "); scanf("%f", &p1.cena);
	printf("Podaj firma: "); gets(p1.firma);
	printf("Podano dane:\nNazwa: %s\nCena: %f\nFirma: %s\n", p1.nazwa, &p1.cena, p1.firma);*/
	}
