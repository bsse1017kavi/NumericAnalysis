#include<stdio.h>
#include<math.h>

#define df(x) (3*(x)*(x) - 4)

double f(double x)
{
	return x*x*x - 4*x -8.93;
}

int main(void)
{
	double a = 2,b = 3,x,eps = 1.0e-9;
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
		
		x = a - f(a)/df(a);
		
		if(fabs(f(x))<eps) break;
		
		a = x;
	}
	
	printf("Iterations: %d\n",n);
	
	printf("%lf\n",x);
	
	return 0;
}
