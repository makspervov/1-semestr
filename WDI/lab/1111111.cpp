//Myroslava Bielova, s96486@pollub.edu.pl
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int zam(int);
float odwrot(int);
int main(){
  int liczba;
  float wynik;
  printf("Podaj liczbe: ");
  scanf("%d", &liczba);
  if(liczba<1000 && liczba>99) {
    wynik=odwrot(liczba);
    printf("%f", wynik);
    printf("%d", zamiana(liczba));
  }
  else printf("Liczba jest zla");
  return 0;
}
int zam(int liczba) {
  int wynik, d1, d2, d3, do1, do2;
  d1=liczba/100;
  d2=(liczba/10)%10;
  d3=liczba%10;
  do1=d3*100;
  do2=d2*10;
  wynik=do1+do2+d1;
  return wynik;
}
float odwrot(int liczba) {
  float wynik;
  wynik=1.0/liczba;
  return wynik;
}
