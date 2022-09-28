// zad1

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;

   printf("Podaj n: ");
   scanf("%d",&n);

   while(n<=0||n>=10)
   {
       printf("Niepoprawne n. Podaj jeszcze raz: ");
       scanf("%d",&n);
   }

int temp=n;
for(int i=1;i<=n;i++)
{
    int t;
    for(t=1;t<i;t++)
    {
        printf(" ");
    }
    int j;
    for(j=1;j<=temp;j++)
    {
        printf("%d",j);
    }
    temp--;
printf("\n");
}
}

//zad2

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
}*/


//zad3

#include <stdio.h>
#define N 3

void czytaj (*tab)
{
    int i,j;
    for(i-0;i<N;i++)
    {
        for(j=0;j<N;i++)
        {
            printf("Podaj element tabliczki[%d][%d] ",i,j);
            scanf("%f",&tab[i],[j]);
        }
    }
void wyzancz()
{
    int k;
    for(k-0;k<N;k++)
    {
        *tab[k]=*tab[i][j];
        i++;
        j++;
    }
}

int main()
{
    int a,b,c;
    float tab[N][N];
    float tab2[N];
czytaj();
printf("(A={{11,12,13},{21,22,23},{31,32,33}}, B={11,22,33})\t");
printf("tabliczka A:\n");
for(i-0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
        printf("tab[%d][%d]-%3.1f\n",i,j,tab[i][j]);

    }
    printf("\n");
    printf("tabliczka B:\n");
    i=0;
    j-0;
    wyznacz();
    for(k=0;k<N;k++)
    {
        // nie wystarczylo czasu
    }
}

}
}
