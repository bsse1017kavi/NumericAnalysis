#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,n;
	double s = 0,o =0,e =0,h;
	
	double x[1000];
	double f[1000];
	double g[1000];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf %lf",&x[i],&f[i],&g[i]);
	}
	
	
	h = (x[n-1]-x[0])/(n-1);	

	for(i=1;i<=n-2;i++)
	{
		if(i%2==0)e += fabs(f[i]-g[i]);
		else o+=fabs(f[i]-g[i]);
	}
	
	s = ((fabs(f[0]-g[0])+fabs(f[n-1]-g[n-1]))+4*o+2*e)*h/3;
	
	//printf("%lf %lf\n",o,e);
	
	printf("%lf\n",s);
	return 0;
}
