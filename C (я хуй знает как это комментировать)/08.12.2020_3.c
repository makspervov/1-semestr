#include <stdio.h>
#define N 3
#define M 2

/*
	| a00 a01 |
A\=	| a10 a11 |
	| a20 a21 |
*/
int main(){
    int i,j;
/*    int tab[N][M]={{a00, a01}, 
				  	 {a10, a11}, 
				  	 {a20, a21}};
*/
	float tab[N][M];
//	float tab[N][M]={{ 0.0, 0.1}, {1.0, 1.1}, {2.0, 2.1}};
// elementy tablicy w C sa zapisywane wiersz po wierszu, tzn najpierw elementy pierwszego wiersza, potem drugiego itd.

    for(i=0; i<N; i++)
    	for(j=0; j<M; j++){
			printf("Podaj element tablicy tab[%d][%d]=",i,j);
			scanf("%f",&tab[i][j]);
		}

	
    for(i=0; i<N; i++){
    	for(j=0; j<M; j++)
        	printf("tab[%d][%d]=%3.1f\t",i,j,tab[i][j]);
		printf("\n");
    }
    printf("\n");
    return 0;
}
