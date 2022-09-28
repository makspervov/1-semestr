#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pracownicy {
	char nazwisko[50];
	char imie[50];
	int pensja;
	char stanowisko[50];
};

struct pracownicy* utworz() {
	struct pracownicy* tab = malloc(sizeof(struct pracownicy) * 2);
	
	struct pracownicy p1 = {"Panczyk", "Maciej", 4500, "doctor"};
	struct pracownicy p2 = {"Montusiewicz", "Jerzy", 4300, "doctor"};
	
	tab[0] = p1;
	tab[1] = p2;
	return tab;
}

void drukuj(struct pracownicy* tab, int ile) {
	int i;
	for (i=0; i < ile; i++){
		printf("Pracownik Nr.%d \n", i+1);
		printf("Nazwisko: %s\n", tab[i].nazwisko);
		printf("Imie: %s\n", tab[i].imie);
		printf("Pensja: %d zl\n", tab[i].pensja);
		printf("Stanowisko: %s\n\n",tab[i].stanowisko);
	}
}

void zapisz(struct pracownicy* tab, int ile) {
	FILE* plik = fopen("plik.txt", "w");
	fprintf(plik, "%d\n", ile);
	
	int i;
	for (i = 0; i < ile; i++) {
		fprintf(plik, "%s %s %d %s\n", tab[i].nazwisko, tab[i].imie, tab[i].pensja, tab[i].stanowisko);
	}

	fclose(plik);
}
 
struct pracownicy* wczytaj(int* ilosc) {
	FILE* plik = fopen("plik.txt", "r");
	char line[100];
	
	fscanf(plik, "%s", line);
	int ile = atoi(line);
	struct pracownicy* tab = malloc(sizeof(struct pracownicy) * ile);
	int i;
	for(i=0; i < ile; i++){
		char nazw[50];
		char im[50];
		char pen[50];
		char stan[50];
		
		fscanf(plik, "%s", nazw);
		fscanf(plik, "%s", im);
		fscanf(plik, "%s", pen);
		fscanf(plik, "%s", stan);
		
		struct pracownicy p;
		memcpy(p.nazwisko, nazw, 50);
		memcpy(p.imie, im, 50);
		p.pensja = atoi(pen);
		memcpy(p.stanowisko, stan, 50);
		
		tab[i] = p;
	}
	return tab;
}
int main() {
	int ile = 2;
	struct pracownicy* prcwnc = utworz();
	
	drukuj(prcwnc, ile);
	zapisz(prcwnc, ile);
	free(prcwnc);
	
	prcwnc = wczytaj(&ile);
	drukuj(prcwnc, ile);
	free(prcwnc);
	
	system("pause");
	return 0;
	
}
