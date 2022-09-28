#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, m;
    int **tab;
    tab = (int*)calloc(sizeof(int*)*)
    for(i=0; i<N; i++){
		printf("Podaj element tablicy tab[%d]=",i);
		scanf("%d",tab+i); // nazwa tablicy jest adresem początku tablicy !
    }

    for(i=0; i<N; i++){
        printf("tab[%d]=%d\t",i,*(tab+i));
    }
    printf("\n");
    return 0;
}
