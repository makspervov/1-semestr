#include<stdio.h>
#include<stdlib.h>

int prostokat (int x, int y){
int polep;
polep = x^y;


return (polep);
}

int main ()
{
    int a, b, pole;
    a=5;
    b=6;
    pole = prostokat (a,b);
    printf("Pole prostokata %d\n", pole);

    return 0;
}
