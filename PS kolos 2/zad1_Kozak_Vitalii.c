#include <stdio.h>
#include <stdlib.h>

void tworz(float*** tab, int w, int k) {
    *tab = malloc(sizeof(float) * w);
    float** tablica = *tab;
	int i;
    for (i = 0; i < w; i++) {
        tablica[i] = malloc(sizeof(float) * k);
    }
}

void usun(float*** tab, int w) {
    float** tablica = *tab;
	int i;
    for (i = 0; i < w; i++) {
        free(tablica[i]);
    }

    *tab = 0;
}

void wczytaj(float** tab, int w, int k) {
	int i;
	int j;
    for (i = 0; i < w; i++) {
        for (j = 0; j < k; j++) {
            printf("tab[%d][%d]=", i, j);
            scanf("%f", &tab[i][j]);
        }
    }
}

void wyswietl(float** tab, int w, int k) {
	int i;
	int j;
    for (i = 0; i < w; i++) {
        for (j = 0; j < k; j++) {
            printf("%f ", tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ile_w = 0, ile_k = 0;

    printf("Ilosc wierszy: ");
    scanf("%d", &ile_w);

    printf("Ilosc kolumn: ");
    scanf("%d", &ile_k);

	// wczytywanie i wyswietlenie podanych z klawiatury liczb rzeczywistych
    float** tabela = 0;
    tworz(&tabela, ile_w, ile_k);

    printf("\nWczytywanie: \n\n");
    wczytaj(tabela, ile_w, ile_k);

    printf("\nWyswietlenie: \n\n");
    wyswietl(tabela, ile_w, ile_k);

    usun(&tabela, ile_w);
    
    printf("\nSuma kolejnych kolumn macierzy A: \n");
    wyswietl(tabela + ile_k, ile_w, ile_k);

	system("pause");
    return 0;
}
