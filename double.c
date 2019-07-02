#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,n = 1000000;
	double a = 1, h;
	
	h = a/n;
	printf("a = %9.4f\n",a);
	
	a = 0;
	
	for(i=1;i<=n;i++) a+=h;
		
	printf("%9.4f\n",a);
	
}
