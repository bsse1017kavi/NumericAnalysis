#include<stdio.h>
#include<math.h>

#define pi 3.14159

double f(double x)
{
	return x*x;
}

int main(void)
{
	int i,n = 1000;
	double a = 0,b = 4,x,y,s = 0,o = 0,e = 0,h;
	
	h = (b-a)/n;	

	for(i=1;i<=n-1;i++)
	{
		x = a+i*h;
		y = f(x);
		
		if(i%2==0)e += y;
		else o+=y;
	}
	
	s = (f(a)+f(b)+4*o+2*e)*h/3;
	
	printf("%lf\n",s);
	return 0;
}
