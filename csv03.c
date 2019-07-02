#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,n = 1000;
	double a = 0, b = 100,h,x,y;
	
	h = (b-a)/n;
	printf("\"x\",\"XSin(x)\"\n");
	
	for(i=0;i<=1000;i++)
	{
		x = a + i*h;
		y = x*sin(x);
		printf("%lf, %lf\n",x,y);
	}
	
	
}
