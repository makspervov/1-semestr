#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ekran
{
	char producent [50];
	char nazwa_typu_matrycy	[50];
	int ilosc_linii_w_pionie;
	int ilosc_linii_w_poziomie;
};

struct ekran* utworz()
{
	struct ekran* tab = malloc(sizeof(struct ekran) * 2);
	
	struct ekran e1 = {"Dell", "IPS", 1440, 2560};
	struct ekran e2 = {"Apple", "IPS", 3384, 6016};
	
	tab[0] = e1;
	tab[1] = e2;
	
	return tab;
}

void drukuj(struct ekran* tab, int ile)
{
	int i;
	for (i = 0; i < ile; i++)
	{
		printf("Ekran Nr. %d\n", i+1);
		printf("Producent: %s\n", tab[i].producent);
		printf("Typ matrycy: %s\n", tab[i].nazwa_typu_matrycy);
		printf("Ilosc linii w pionie: %d\n", tab[i].ilosc_linii_w_pionie);
		printf("Ilosc linii w poziomie: %d\n\n", tab[i].ilosc_linii_w_poziomie);
	}
}

void zapisz(struct ekran* tab, int ile)
{
	FILE* text = fopen("pervovmaksym_zad2.txt", "w");
	fprintf(text, "%d\n", ile);
	
	int i;
	for (i = 0; i < ile; i++)
	{
		fprintf(text, "%s %s %d %d\n", tab[i].producent, tab[i].nazwa_typu_matrycy, tab[i].ilosc_linii_w_pionie, tab[i].ilosc_linii_w_poziomie);
	}
	
	fclose(text);
	
}

struct ekran* wczytaj(int* ilosc)
{
	FILE* text = fopen("pervovmaksym_zad2.txt", "r");
	char line [100];
	
	fscanf(text, "%s", line);
	int ile = atoi(line);
	struct ekran* tab = malloc(sizeof(struct ekran) * ile);
	int i;
	for (i = 0; i < ile; i++)
	{
		char prod[100];
		char typ[100];
		char w_pionie[100];
		char w_poziomie[100];
		
		fscanf(text, "%s", prod);
		fscanf(text, "%s", typ);
		fscanf(text, "%s", w_pionie);
		fscanf(text, "%s", w_poziomie);
		
		struct ekran e;
		memcpy(e.producent, prod, 100);
		memcpy(e.nazwa_typu_matrycy, typ, 100);
		e.ilosc_linii_w_pionie = atoi(w_pionie);
		e.ilosc_linii_w_poziomie = atoi(w_poziomie);
		
		tab[i] = e;
	}
	return tab;
}

int main() {
	int ile = 2;
	struct ekran* ekr = utworz();
	
	printf("DRUKOWANIE\n\n\n");
	drukuj(ekr, ile);
	zapisz(ekr, ile);
	free(ekr);
	
	printf("\nWCZYTANIE\n\n\n");
	ekr = wczytaj(&ile);
	drukuj(ekr, ile);
	free(ekr);
	
	system("pause");
	return 0;
	
}
