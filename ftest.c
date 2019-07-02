#include<stdio.h>
#include<math.h>

double f(double x,double (*funcP)(double a))
{
	return (funcP(x));
}

int main(void)
{
	int i,n = 1000;
	double a = 0, b = 3.151967,h,x,y,z;
	
	h = (b-a)/n;
	printf("\"x\",\"y\",\"z\"\n");
	
	for(i=0;i<n;i++)
	{
		x = a + i*h;
		y = f(x,sin);
		z = sin(x);
		printf("%lf, %lf , %lf\n",x,y,z);
	}
	
	//printf("%lf %lf\n",y,z);
	return 0;
}
