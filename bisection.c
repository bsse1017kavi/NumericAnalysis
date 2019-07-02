#include<stdio.h>
#include<math.h>

double f(double x)
{
	return x*x*x - 4*x -8.93;
}

int main(void)
{
	double a = 2,b = 3,x,eps = 1.0e-6;
	int n = 0;
	
	
	if(!(f(a)*f(b)) < 0)
	{
		printf("No root\n");
		return 0;
	}
	
	//x = (a+b)/2;
	
	
	while(1)
	{
		n++;
		
		x = (a+b)/2;
		
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
	
	printf("Iterations: %d\n",n);
	
	printf("%lf\n",x);
	
	return 0;
}
