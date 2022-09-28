#include <stdio.h>
void wyswietl(float z1re, float z1im){
	printf("(%3.1f + i*%3.1f)",z1re, z1im);
}

void suma(float z1re, float z1im, float z2re, float z2im, float *z3re, float *z3im){
    *z3re=z1re+z2re;
    *z3im=z1im+z2im;
}
int main(){
    float z1r=1.1, z1i=2.2; // pierwsza liczba zespolona (3.3 + i*4.5)
	float z2r=3.3, z2i=4.4; // druga
    float z3r, z3i;         // trzecia
    //printf("Podana liczba zespolona to: (%f + i*%f)\n",z1r, z1i);
    wyswietl(z1r,z1i);
    printf("\t+\t");
    wyswietl(z2r,z2i);
    printf(" = ");
    suma(z1r, z1i, z2r, z2i, &z3r, &z3i);
    wyswietl(z3r,z3i);
    printf("\n");
    
	return 0;
}
