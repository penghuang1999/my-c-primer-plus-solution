#include<stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch;
	int i,j;

	ch = getchar();
	getchar();
	scanf("%d%d",&i,&j);
	chline(ch,i,j);

	return 0;
}

void chline(char ch, int i, int j)
{
	int m,n;

	for (m = 0;m < j;m++){
		for (n = 0;n < i;n++)
			putchar(ch);
		putchar('\n');
	}

	return ;
}
