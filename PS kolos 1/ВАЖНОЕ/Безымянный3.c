#include <stdio.h>
#include <stdlib.h>

void Kub(int a,int *pole, int *obj)
{
    	pole=6*(a*a);
    	obj=a*a*a;
}

int main()
{
    int a, pole, obj;
    int p_a=&a;
    Kub(a,&pole,&obj);
    printf("podaj wartosc a: ");
    scanf("%d\n",&a);
    printf("Pole powierzchni bocznej= %d\n",pole);
    printf("Objetosc= %d\n",obj);

    printf("\nAdres a:%d\n Deferencja adresu: %d",p_a,&p_a);
    return 0;
}
