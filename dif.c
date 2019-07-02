#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,n;
	
	double x[1000];
	double f[1000];
	double d[1000];
	double d2[1000];
	
	printf("\"x\", \"f\", \"df\", \"d2f\"\n");

	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&f[i]);
	}
	
	for(i=0;i<n;i++)
	{
		
		if(i==0)
		{
			d[i] = (f[i+1] - f[i]) / (x[i+1]-x[i]); 
		}
		
		else if(i==n-1)
		{
			d[i] = (f[i] - f[i-1]) / (x[i]-x[i-1]);
		}
		
		else
		{
			d[i] = (f[i+1] - f[i-1]) / (x[i+1]-x[i-1]);
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			d2[i] = (d[i+1] - d[i]) / (x[i+1]-x[i]);
		}
		
		else if(i==n-1)
		{
			d2[i] = (d[i] - d[i-1]) / (x[i]-x[i-1]);
		}
		
		else
		{
			d2[i] = (d[i+1] - d[i-1]) / (x[i+1]-x[i-1]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%lf, %lf, %lf, %lf\n", x[i], f[i], d[i], d2[i]);
	}
	
	return 0;
}
