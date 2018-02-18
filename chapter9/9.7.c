#include<stdio.h>

void location(char ch);
int main(void)
{
	char ch;

	while((ch = getchar()) != '#')
	{
		location(ch);
		getchar();
	}

	return 0;
}

void location(char ch)
{
	int a;

	if((ch >= 'a') && (ch <= 'z'))
	{
		a = (int)(ch - 'a') + 1;
		printf("%d\n",a);
	}
	else if((ch >= 'A') && (ch <= 'Z'))
	{
		a = (int)(ch - 'A') + 1;
		printf("%d\n",a);
	}
	else
		printf("-1\n");

	return ;
}
