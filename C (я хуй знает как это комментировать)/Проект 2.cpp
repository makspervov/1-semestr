#include <stdio.h>
#include <math.h>
 
main() {
    float a;
	float b;
	float c;
	float d;
	float x1;
	float x2;
    printf("a="); scanf("%f",&a);
    printf("b="); scanf("%f",&b);
    printf("c="); scanf("%f",&c);
    d = b*b - 4*a*c;
    if (d>0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("x1=%.2f; x2=%.2f", x1, x2);
    }
    else
        if (d = 0) {
            x1 = -b / (2*a);
            printf("x1=%.2f; x2=%.2f", x1, x2);
        }
        else printf("Net korney!");
    printf("\n");
}
