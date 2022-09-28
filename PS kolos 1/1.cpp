#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, S, p;
	//P - площа трикутника, s - півсума всіх сторін
	cout <<"Vvedit` znaczennya a, b i c\n";
	cin >> a;
	cin >> b;
	cin >> c;
	
	if ((a+b>c) and (a+c>b) and (b+c>a))
		{
		p=(a+b+c)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
	
		cout << "S = " << S;
		}
	else if (a=b=c) 
	{
		printf("Ten trojkat jest rownoboczny");
	}
	else;
		printf(" Nie istnieje! ");
	

	return 0;
}
