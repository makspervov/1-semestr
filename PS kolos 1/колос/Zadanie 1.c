/*Pervov Maksym, grupa 1.8/15
Zadanie 1*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
printf("Wpisz wartosc n: ");
scanf("%d", &n);
while (n<=0 || n>=10 ){
	printf("Podaj poprawne n:");
	scanf("%d", &n);}
int temp=n;
int i, j;
for(i=1;i<=n;i++)
{
    int t;
    for(t=1;t>i;t++)
    {
        printf(" ");
    }
    for(j=n;j>=temp;j--)
    {
        printf("%d",j);
    }
    temp--;
printf("\n");
}	
	
printf("liczba %d z przedzialu (0, 10)\n\n", n);
system("PAUSE");
return 0;
}
