#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,c = 0;
	double a = 1.0,b = sqrt(2);
	
	while(a>0)
	{
		c++;
		a/=2;
	}
	
	/*printf("%d\n",c);
	printf("%22.16lE\n",a);*/
	//printf("%l\n",a);
	
	/*printf("%f\n",a);
	printf("%lf\n",a);
	printf("%E\n",a);
	printf("%lE\n",a);
	printf("%g\n",a);
	printf("%lg\n",a);*/
	
	printf("%f\n",b);
	printf("%lf\n",b);
	printf("%E\n",b);
	printf("%lE\n",b);
	printf("%g\n",b);
	printf("%lg\n",b);
}
