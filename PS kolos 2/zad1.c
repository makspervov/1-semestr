#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct samochod {
	char marka[50];
	char model[50];
	int rok_produkcji;
	int przebieg;
};

struct samochod* utworz() {
	struct samochod* tab = malloc(sizeof(struct samochod) * 2);

	struct samochod s1 = { "Tesla", "ModelX", 2021, 0 };
	struct samochod s2 = { "BMW", "X7", 2019, 1000 };

	tab[0] = s1;
	tab[1] = s2;

	return tab;
}

void drukuj(struct samochod* tab, int ile) {
	int i;
	for (i = 0; i < ile; i++) {
		printf("Samochod %d:\n", i + 1);
		printf("Marka: %s\n", tab[i].marka);
		printf("Model: %s\n", tab[i].model);
		printf("Rok produkcji: %d\n", tab[i].rok_produkcji);
		printf("Przebieg: %d\n\n", tab[i].przebieg);
	}
}

void zapisz(struct samochod* tab, int ile) {
	FILE* plik = fopen("plik.txt", "w");

	fprintf(plik, "%d\n", ile);

	int i;
	for (i = 0; i < ile; i++) {
		fprintf(plik, "%s %s %d %d\n", tab[i].marka, tab[i].model, tab[i].przebieg, tab[i].rok_produkcji);
	}

	fclose(plik);
}

struct samochod* wczytaj(int* ilosc) {
	FILE* plik = fopen("plik.txt", "r");
	char line[100];

	fscanf(plik, "%s", line);

	int ile = atoi(line);

	struct samochod* tab = malloc(sizeof(struct samochod) * ile);

	int i;
	for (i = 0; i < ile; i++) {
		char mar[50];
		char mod[50];
		char przeb[10];
		char rok[10];

		fscanf(plik, "%s", mar);
		fscanf(plik, "%s", mod);
		fscanf(plik, "%s", przeb);
		fscanf(plik, "%s", rok);

		struct samochod s;
		memcpy(s.marka, mar, 50);
		memcpy(s.model, mod, 50);
		s.przebieg = atoi(przeb);
		s.rok_produkcji = atoi(rok);

		tab[i] = s;
	}

	return tab;
}

int main()
{
	int ile = 2;
	struct samochod* smchd = utworz();

	drukuj(smchd, ile);

	zapisz(smchd, ile);

	free(smchd);

	smchd = wczytaj(&ile);

	drukuj(smchd, ile);

	free(smchd);

	return 0;
}
