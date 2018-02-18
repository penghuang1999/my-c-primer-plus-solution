#include<stdio.h>

double harmonic_average(double a, double b);

int main(void){

	double a,b;
	double c;

	scanf("%lf%lf",&a,&b);
	while((a == 0)||(b == 0)||(a + b) == 0 )
	{
		printf("a and b can't be 0 and a + b can't be 0! Please try again!");
		scanf("%lf%lf",&a,&b);
	}

	c = harmonic_average(a,b);
	printf("The harmonic_average of %.2lf and %.2lf is %.2lf\n",a,b,c);

	return 0;
}

double harmonic_average(double a,double b)
{
	double c;

	c = 1 / b +1 / a;
	c = 1 / c;
	return c;
}
