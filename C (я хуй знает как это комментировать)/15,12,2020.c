//Tablica dwuwymiarowa, przechowywana jest wierszami.
#include <stdio.h>
#define ROWS 3
#define COLS 5
void ArrayAsOneDimensional (int array[], int size, int no_col);
int main() { int array [ROWS][COLS];
	int ix, iy;
	printf("Wypelnianie 'array'\n");
	for (ix=0; ix<COLS; ix++)
		for (iy=0; iy<ROWS; iy++)
		array[iy][ix] = (iy*COLS) +ix +1;
printf("Drukowanie tablicy 'array'\n- wiersz po wierszu\n");
	for (ix=0; ix<ROWS; ix++)
	{	printf ("wiersz nr %2d:\n", ix);
		for (iy=0; iy<COLS; iy++)
		printf ("%2d ", array[ix][iy]);
		printf("\n"); }
ArrayAsOneDimensional(&array[0][0], ROWS*COLS, COLS);
return 0; }
void ArrayAsOneDimensional (int array[], int size, int no_col)
{ int iy;
	printf ("Drukowanie tablicy 'array'\n jako jednowymiarowej\n");
	for (iy=0; iy<size; iy++)
	{	printf ("%2d ", array[iy]);
		if ((iy+1)%no_col == 0) printf ("\n");
	}
}

