#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;

   printf("Podaj n: ");
   scanf("%d",&n);

   while(n<=0||n>=10)
   {
       printf("Nie poprawne n. Podaj jeszcze raz: ");
       scanf("%d",&n);
   }

int temp=n;
int i;
for(i=1;i<=n;i++)
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
