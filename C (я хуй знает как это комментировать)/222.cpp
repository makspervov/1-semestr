/* L3Z1.C - silna liczona za pomoca instrukcji switch */
#include <stdio.h>
#include <stdlib.h>
//#define min 1
//#define max 9

long int silnia (int liczba)
{
	long int nsilnia = 1;	
	switch (liczba) {
		case 9: nsilnia*=9;
		case 8: nsilnia*=8;
		case 7: nsilnia*=7;
		case 6: nsilnia*=6;
		case 5: nsilnia*=5;
		case 4: nsilnia*=4;
		case 3: nsilnia*=3;
		case 2: nsilnia*=2;
		case 1: nsilnia*=1;
		}
		return nsilnia;
}

int main(){
	int n, i;
	long int nsilnia=1;
	//int min=1, max=9;
	const int min=1, max=9;
	int liczba;
	do {
		system("clear");
		printf("Podaj liczbe z zakresu od 1 do 9:");
		scanf("%d",&liczba);
		} while(liczba<min||liczba>max);
	 
	 nsilnia = silnia (liczba);
	 
printf("%d! = %ld\n",liczba,nsilnia);

nsilnia=1;
for(i=1; i<=liczba; i++)

			nsilnia*=i;
	printf("Sprawdzenie: %d! = %ld\n",liczba,nsilnia);
 return 0;
}
