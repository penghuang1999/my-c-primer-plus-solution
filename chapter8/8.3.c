#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	int num_lower,num_upper;

	num_upper = num_lower = 0;

	while((ch = getchar()) != EOF)
	{
		if(isupper(ch))
			num_upper++;
		else if(islower(ch))
			num_lower++;
		else
			printf("the %c is not a character!",ch);
	}
	printf("the number of lowercase letters is %d,the number of uppercase letters is %d\n",num_lower,num_upper);

	return 0;
}
