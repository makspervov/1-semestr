#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct waluta
{
	char nazwa_waluty [50];
	int kurs_kupna;
	int kurs_sprzedazy;
};

struct waluta* utworz()
{
	struct waluta* tab = malloc(sizeof(struct waluta) * 2);
	
	struct waluta w1 = {"Hrywnia", 13/58, 14};
	struct waluta w2 = {"Euro", 454, 455};
	
	tab[0] = w1;
	tab[1] = w2;
	
	return tab;
}

void drukuj(struct waluta* tab, int ile)
{
	int i;
	for (i = 0; i < ile; i++)
	{
		printf("Waluta Nr. %d\n", i+1);
		printf("Nazwa waluty: %s\n", tab[i].nazwa_waluty);
		printf("Kurs kupna: %d\n", tab[i].kurs_kupna);
		printf("Kurs sprzedazy: %d\n\n", tab[i].kurs_sprzedazy);
	}
}

void zapisz(struct waluta* tab, int ile)
{
	FILE* plik = fopen("plik.bin", "w");
	fprintf(plik, "%d\n", ile);
	
	int i;
	for (i = 0; i < ile; i++)
	{
		fprintf(plik, "%s %d %d\n", tab[i].nazwa_waluty, tab[i].kurs_kupna, tab[i].kurs_sprzedazy);
	}
	
	fclose(plik);
	
}

struct waluta* wczytaj(int* ilosc)
{
	FILE* plik = fopen("plik.bin", "r");
	char line [100];
	
	fscanf(plik, "%s", line);
	int ile = atoi(line);
	struct waluta* tab = malloc(sizeof(struct waluta) * ile);
	int i;
	for (i = 0; i < ile; i++)
	{
		char naz[50];
		char kupna[50];
		char sprzedaza[50];
		
		fscanf(plik, "%s", naz);
		fscanf(plik, "%s", kupna);
		fscanf(plik, "%s", sprzedaza);
		
		struct waluta w;
		memcpy(w.nazwa_waluty, naz, 100);
		w.kurs_kupna = atol(kupna);
		w.kurs_sprzedazy = atol(sprzedaza);
		
		tab[i] = w;
	}
	return tab;
}

int main() {
	int ile = 2;
	struct waluta* wal = utworz();
	
	drukuj(wal, ile);
	zapisz(wal, ile);
	free(wal);
	
	wal = wczytaj(&ile);
	drukuj(wal, ile);
	free(wal);
	
	system("pause");
	return 0;
	
}
