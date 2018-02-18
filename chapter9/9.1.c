#include<stdio.h>

double min(double x,double y);

int main(void)
{
	double a,b;
	double c;

	scanf("%lf%lf",&a,&b);

	c = min(a,b);
	printf("The smaller number in %.2lf and %.2lf is %.2lf\n",a,b,c);

	return 0;
}

double min(double x,double y)
{
	double c;

	c = x>y ? y : x;

	return c;
}
