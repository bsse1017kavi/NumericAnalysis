#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,n = 1000;
	double a = 0, b = 3.151967,h,x,y,z;
	
	h = (b-a)/n;
	printf("\"x\",\"Sin(x)\",\"Cos(x)\"\n");
	
	for(i=0;i<=600;i++)
	{
		x = a + i*h;
		y = sin(x);
		z = cos(x);
		printf("%lf, %lf , %lf\n",x,y,z);
	}
	
	
}
