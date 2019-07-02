#include<stdio.h>
#include<math.h>

#define f(x) (sin(x)-cos(x))
#define PI 3.14156

int main(void)
{
	double a1 = 0,b1 = PI,a2 =PI, b2 = 2*PI,x1,x2,eps = 1.0e-6;
	double a,b,h,x,y_1,y_2;
	int n = 0,n1 = 200,i;
	
	
	if(!(((f(a1)*f(b1)) < 0) || (f(a2)*f(b2)) < 0))
	{
		printf("No root\n");
		return 0;
	}
	
	
	while(1)
	{
		n++;
		
		x1 = (a1+b1)/2;
		x2 = (a2+b2)/2;
		
		if((fabs(f(x1))<eps) && (fabs(f(x1))<eps)) break;
		
		if(((f(a1)*f(x1))<0))
		{
			b1 = x1;
		}
		
		else
		{
			a1 = x1;	
		} 
		
		if(((f(a2)*f(x2))<0))
		{
			b2 = x2;
		}
		
		else
		{
			a2 = x2;	
		} 
	}
	
	a = x1, b = x2;
	
	printf("\"x\",\"Sin(x)\",\"Cosx\"\n");
	
	h = (b-a)/n1;
	
	for(i=0;i<=n1;i++)
	{
		x = a + i*h;
		y_1 = sin(x);
		y_2 = cos(x);
		
		printf("%lf,%lf,%lf\n",x,y_1,y_2);
	}
	
	return 0;
}
