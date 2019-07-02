#include<stdio.h>
#include<math.h>

#define PI 3.14156

int main(void)
{
	int i,n=300;
	double a= 0.785397,b = 3.926990,h,x,y1,y2;
	
	printf("\"x\",\"Sin(x)\",\"Cosx\"\n");
	
	h = (b-a)/n;
	
	for(i=0;i<=n;i++)
	{
		x = a + i*h;
		y1 = sin(x);
		y2 = cos(x);
		
		printf("%lf,%lf,%lf\n",x,y1,y2);
	}
	
	return 0;
}
