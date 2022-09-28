#include <stdio.h>
#include <string.h>
#define ile 2

struct produkt
{
    char nazwa[100];
    float cena;
    char firma[100];
};
int main()
{
    struct produkt pr[ile];
    struct produkt *wsk=&pr[ile];
    for (int i = 0; i < ile; i++)
    {
        printf("Produkt nr: %d\tPodaj nazwe produktu: ", i+1);
        scanf("%s", pr[i].nazwa);
        printf("Produkt nr: %d\tPodaj cene: ", i+1);
        scanf("%f", &pr[i].cena);
        printf("Produkt nr: %d\tPodaj producenta: ", i+1);
        scanf("%s", pr[i].firma);
    }
    printf("\n");
    for (int i = 0; i < ile; i++)
    {
        printf("Nazwa produktu nr %d: %s", i+1, pr[i].nazwa);
        printf("Cena produktu nr %d: %f\n", i+1, pr[i].cena);
        printf("Producent produktu nr %d: %s\n", i+1, pr[i].firma);
    }
}

