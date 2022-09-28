struct produkt
{
char nazwa[20];
char firma[20];
float cena;
float prowizja;
};



void wczytanie(int i,int a,struct produkt prod[a]){
	printf("Produkt[%d]:",i+1);
	scanf("%s",&prod[i].nazwa);
	printf("Firma:");
	scanf("%s",&prod[i].firma);
	printf("Cena:");
	scanf("%f",&prod[i].cena);
	printf("Prowizja(procentowo):");
	scanf("%f",&prod[i].prowizja);
}
void drukowanie(int i,struct produkt prod[i])
{
	printf("Produkt[%d]:%s \n",i+1,prod[i].nazwa);
	printf("Marka:%s \n",prod[i].firma);
	printf("Cena:%.3f$\n",prod[i].cena);
	printf("Prowizja:%.3f$\n",(prod[i].prowizja*prod[i].cena)/100);
}



int main()
{
	int a;
	printf("Podaj ilosc produktow:");
	scanf("%d",&a);
	struct produkt prod[a];
	for(int i=0;i<a;i++)
	{
		wczytanie(i,a,prod);
	}
	for(int i=0;i<a;i++)
	{
		drukowanie(i,prod);
	}
}


