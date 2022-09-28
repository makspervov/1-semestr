#include <stdio.h>
#include <stdlib.h>
int func(int numbers[], int n);

int main()
{
    const int N = 5;
    int zmienna = 0;
    int tab[N];
    for (int i = 0; i < N; i++) {
        printf("Podaj element %d: ", i + 1);
        scanf("%d", &zmienna);
        tab[i] = zmienna;
    }
    int suma = func(tab, N);
    printf("Suma = %d", suma);
    return 0;
}

int func(int numbers[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] > 1 && numbers[i] < 10) {
            sum += numbers[i];
        }
    }
    return sum;
}

