#include <stdio.h>
#include <iostream>
#include <cmath>

void wyswietl(float z1re, float z1im){
	printf("(%3.1f + i*%3.1f)",z1re, z1im);
}

void suma(float z1re, float z1im, float z2re, float z2im, float *z3re, float *z3im){
    *z3re=z1re+z2re;
    *z3im=z1im+z2im;
}
int main(){
	float a, b, c, d;
	
	std::cout << "Print a: ";
	std::cin >> a;
	
	std::cout << "Print b: ";
	std::cin >> b;
	
	std::cout << "Print c: ";
	std::cin >> c;
	
	std::cout << "Print d: ";
	std::cin >> d;
	
    float z1r=a, z1i=b; 						// pierwsza liczba zespolona 
	float z2r=c, z2i=d; 						// druga
    float z3r=0, z3i=0;        	// trzecia
    //printf("Podana liczba zespolona to: (%f + i*%f)\n",z1r, z1i);
    wyswietl(z1r, z1i);
    printf(" / ");
    wyswietl(z2r, z2i);
    printf(" = ");
    wyswietl(z1r, z1i);
    printf("*");
    wyswietl(z2r, z2i);
    printf("\t / \t");
    wyswietl(z3r, z3i);
    printf("\n");
    
	return 0;
}
