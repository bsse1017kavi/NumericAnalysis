#include<stdio.h>
#include<math.h>

#define pi 3.14159

double f(double x)
{
	return sin(x);
}

int main(void)
{
	int i,n;
	double a = 0,b = pi,x,y,s = 0,sn = 0,h;
	
	scanf("%d",&n);
	
	h = (b-a)/n;	

	for(i=1;i<=n-1;i++)
	{
		x = a+i*h;
		y = f(x);
		
		sn+= y;
	}
	
	s = (0.5*(f(a)+f(b))+sn)*h;
	
	printf("%lf\n",s);
	return 0;
}
