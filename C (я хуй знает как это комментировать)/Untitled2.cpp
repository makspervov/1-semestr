/*  L2Z4.C - warunek  if, operatory || i && */
#include <stdio.h>
int main ()
 {
//W!=0 - istnieje jedno rozwiazanie:
	float a=2,b=3,c=5,d=1,e=-8,f=-7,w,wx,wy,x,y;
//W=0, Wx=0, Wy=0 - uklad nieoznaczony:
//  float a=1,b=-1,c=0,d=2,e=-2,f=0,w,wx,wy,x,y;
//W=0, Wx!=0, Wy!=0 - uklad sprzeczny:
//  float a=3,b=-3,c=8,d=2,e=-2,f=0,w,wx,wy,x,y;
	system("clear");
	w=a*e-b*d;
	wx=b*f-c*e;
	wy=a*f-c*d;
	if (w!=0)
		{
		x=wx/w; y=wy/w;
		printf("w!=0 - istnieje jedno rozwiazanie:\tx=%f\t,y=%f\n",x,y);
	}
	else
		if ((wx==0) && (wy==0))
		printf("w=%1.0f, wx=%1.0f, wy=%1.0f, uklad nieoznaczony",w,wx,wy);
	else
		printf("w=%1.0f, wx=%f, wy=%f, uklad sprzeczny",w,wx,wy);
return(0);
}
