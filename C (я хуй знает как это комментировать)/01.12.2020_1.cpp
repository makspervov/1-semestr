int main()
{
int tab[4];
	for(int i=0;i<4;i++){
		printf("Podaj element:");
		scanf("%d",&tab[i]);
	}
	
	for(int i=0;i<4;i++){
		printf("tab[%d]=%d\t",i,tab[i]);


}
int i=1;
int r=tab[i]-tab[i-1];
int r1=tab[i+1]-tab[i];
int r2=tab[i+2]-tab[i+1];
if(r==r1&&r==r2&&r1==r2){
	printf("Jest ciagiem artmetycznym");
}
else printf("Nie jest");
return 0;
}
