/*Pervov Maksym, grupa 1.8/15
Zadanie 1
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
}*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void oblicz(int r, double *s, double *v)
{
	s = 4.0 * PI * r*r;
	v = 4.0 / 3.0 * PI * r*r*r;
}

int main()
{
	int r;
	double s, v;	
	int p_r = &r;
	printf("Wpisz wartosc r: ");
	scanf("%lf", &r);
	oblicz(r, &s, &v);	
	printf("Pole kuli = %5.3f\nObjetnosc kuli = %5.3f\n", s, v);

	printf("\nAdres a:%d\n Deferencja adresu: %d",p_r,&p_r);
	return 0;
}

