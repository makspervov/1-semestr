#include <stdio.h>
#include <stdlib.h>

struct Narty {
double cena;
int rok;
char model[10]; // nie mogê *model
} head = {.cena = 1350}, fischer = {1299, 2018, "slalom"};
int main() {
struct Narty blizard,
*mojenar = &fischer;
printf("Rozmiar obiektow struktuty \'Narty\'=%d bajty\n ", sizeof(struct Narty));
head.cena = 1500;
head.rok = 2017;
strcpy(head.model, "skitour");
blizard.rok = 2012; blizard.cena = 1359;
strcpy (blizard.model, "gigant");
mojenar->rok = 2019;
printf("Moje narty:\n cena =%.2lf, rok: %d, model: %s\n",\
mojenar->cena, mojenar->rok, mojenar->model);
printf("Narty blizard:\n cena =%.2lf, rok: %d, model: %s\n",\
blizard.cena, blizard.rok, blizard.model);
printf("Narty head:\n cena =%.2lf, rok: %d, model: %s\n",\
head.cena, head.rok, head.model);
return 0; }


