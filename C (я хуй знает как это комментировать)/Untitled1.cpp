#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, z;
   printf("Podaj a=");
   scanf("%d",&a);
   printf("Podaj b=");
   scanf("%d",&b);
   if (a>b) z=a;
   else z=b;
    printf("Wieksza z podanych liczb %d i %d to: %d", z);
    return 0;
}

