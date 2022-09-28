#include <stdio.h>
#define ROWS 30
#define COLS 15
int main()
{ 
char tekst[ROWS][COLS];
int row, line;
printf("Wypelnianie tabeli 'tekst'\n");
printf("Zakoncz wiersz w miejscu\n pierwszej spacji\n");
for (row=0; row<ROWS; row++)
	{ printf ("%d: ", row);
	gets(tekst[row]);
	if (tekst[row][0]==' ') break; }
printf("Drukowanie tablicy 'tekst'\n- wiersz po wierszu\n");
for(line=0; line<row; line++) printf ("%s\n", tekst[line]);
return 0;
}

