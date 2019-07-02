#include<stdio.h>
#include<math.h>

double f(double x)
{
	return (x*x)/4 - 4*sin(x);
}

int main(void)
{
	double a = 2,b = 3,x,eps = 1.0e-6,c;
	int n = 1000,i;
	double a1 = 0,x1,y1,s = 0,o = 0,e = 0,h;
	
	
	if(!(f(a)*f(b)) < 0)
	{
		printf("No root\n");
		return 0;
	}
	
	//x = (a+b)/2;
	
	
	while(1)
	{	
		x = (a*f(b)-b*f(a))/(f(b)-f(a));
		
		if(fabs(f(x))<eps) break;
		
		if(((f(a)*f(x))<0))
		{
			b = x;
		}
		
		else
		{
			a = x;	
		} 
	}
	
	//printf("Iterations: %d\n",n);
	
	c = x;
	//printf("%lf\n",c);
	h = (c-a1)/n;
	//printf("%lf\n",h);	

	for(i=1;i<=n-1;i++)
	{
		x1 = a1+i*h;
		y1 = f(x1);
		
		if(i%2==0)e += fabs(y1);
		else o+=fabs(y1);
	}
	
	s = (fabs(f(a1))+fabs(f(c))+4*o+2*e)*h/3;
	
	printf("%lf\n",s);
	
	return 0;
}
