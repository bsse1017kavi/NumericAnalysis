#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,n = 300;
	double a = 0, b = 3.151967,h,x,y;
	
	h = (b-a)/n;
	printf("\"x\",\"Sin(x)\"\n");
	
	for(i=0;i<=300;i++)
	{
		x = a + i*h;
		y = sin(x);
		printf("%lf, %lf\n",x,y);
	}
}
