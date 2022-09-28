#include <stdio.h>
#include <stdlib.h>

void wczytaniel (int *a, int n){
int i;	
for(i=0; i<n; i++){
	printf("Podaj element tablicy tab[%d]=",i);
	scanf("%d", a+i); 
    }
}

void drukuj (int *a, int n){
int i;
for(i=0; i<n; i++){
    printf("tab[%d]=%d\t",i,*(a+i));
    }
    printf("\n");
}

int main(){
    int i, n;
    int *tab;
    printf("Prosze podac wartosc n: ");
    scanf("%d", &n);
    tab = (int*) calloc(n, sizeof(int));
	wczytaniel(tab, n);
	drukuj(tab, n);
    return 0;
}
