#include<stdio.h>

void pow(double a,int b);

int main(void)
{
	double a;
	int b;
	double result;

	scanf("%lf%d",&a,&b);
	pow(a,b);

	return 0;
}

void pow(double a,int b)
{
	int i;
	double d = 1;
	if(b == 0){
		if(a == 0)
			printf("The 0 power of 0 is not defined,so we assume it is 1.\n");
		else
			printf("The 0 power of %.2lf is 1.\n",a);
	}
	else if ((a == 0) && (b < 0))
		printf("The %d power of 0 is infinity.\n",b);
	else
	{
		if (b > 0){
			for (i = 1;i <= b;i++){
				d = d * a;
			}
			printf("The %d power of %.2lf is %.2lf.\n",b,a,d);
		}
		else
		{
			b = -b;
			for (i = 1;i <= b;i++){
				d = d * a;
			}
			printf("The %d power of %.2lf is %.2lf.\n",-b,a,1/d);
		}
	}

	return ;
}