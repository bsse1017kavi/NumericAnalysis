#include<stdio.h>
#include<math.h>

#define pi 3.14159

double f(double x)
{
	return sin(x);
}

int main(void)
{
	int i,n = 1000;
	double a = 0,b = pi,x,x1,y,s = 0,h;
	
	h = (b-a)/n;
	
	for(i=0;i<=n;i++)
	{
		x = a+i*h;
		y = f(x);
		
		s += (y*h);
	}
	
	printf("%lf\n",s);
	return 0;
}
