#include <stdio.h>
#include <string.h>
#define ile 2
struct produkt
{
char nazwa[100];
float cena;
char firma[100];
};



void wczytanie(struct produkt *wsk, int i){
	printf("Produkt nr: %d\tPodaj nazwe produktu: ", i+1);
	scanf("%s", wsk->nazwa);
	printf("Produkt nr: %d\tPodaj cene: ", i+1);
	scanf("%f", &wsk->cena);
	printf("Produkt nr: %d\tPodaj producenta: ", i+1);
	scanf("%s", wsk->firma);
	//wsk++;
}



int main()
{
	struct produkt pr[ile]; //int x;
	struct produkt *wsk=pr;//int *w=&x;
	//wsk=pr;
	for (int i = 0; i < ile; i++, wsk++)
	{
		wczytanie(wsk, i);
	}
	printf("\n");
	for (int i = 0; i < ile; i++)
	{
		printf("Nazwa produktu nr %d: %s\n", i+1, pr[i].nazwa);
		printf("Cena produktu nr %d: %f\n", i+1, pr[i].cena);
		printf("Producent produktu nr %d: %s\n\n", i+1, pr[i].firma);
	}
}

