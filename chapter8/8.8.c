#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void caculate(char ch,double a,double b);		//a function to caculate the result.
void getchar_first(void);

int main(void)
{
	double a , b ;
	char ch,num[100];
	char *ptr = (char*)malloc(100*sizeof(char));	//the string to store the number.
	int symbol = 0;									//a symbol to break.

	printf("Enter the operation of your choice:\n");
	printf("a.add                    s.subtract\n");
	printf("m.multiply               d.divide\n");
	printf("q.quit\n");
	while((ch = getchar()) != 'q')
	{
		while((ch != 'a')&&(ch != 's')&&(ch != 'm')&&(ch != 'd')){
			printf("Please enter a letter in the list!\n");
			getchar_first();						//to avoid the effect of \n.
			ch = getchar();
			if(ch == 'q'){
				symbol = 1;							//when get q,let the break symbol be 1.
				break;
			}
		}
		if(symbol == 1)
			break;
		printf("Enter first number: ");
		scanf("%s",num);
		a = strtod(num,&ptr);						//translate the string to double number
		while(strlen(ptr) != 0){					//if the sting is not a number.
			printf("Please enter a number!\n");
			scanf("%s",num);
			a = strtod(num,&ptr);
		}
		printf("Enter the second number: ");
		scanf("%s",num);
		b = strtod(num,&ptr);
		while((strlen(ptr) != 0)||(b == 0)){
			if(strlen(ptr) != 0){
				printf("Please enter a number!\n");
				scanf("%s",num);
				b = strtod(num,&ptr);
			}
			else if (ch != 'd'){				//when divide, the second can not be 0.
				break;
			}
			else{
				printf("The second number can't be 0!\n");
				scanf("%s",num);
				b = strtod(num,&ptr);
			}
		}
		caculate(ch,a,b);
		printf("Enter the operation of your choice:\n");
		printf("a.add                    s.subtract\n");
		printf("m.multiply               d.divide\n");
		printf("q.quit\n");
		ch = getchar();
	}

	printf("Bye!\n");
}

void caculate(char ch,double a,double b)
{
	switch(ch){
		case 'a':
			printf("%.2lf + %.2lf = %.2lf\n",a,b,a+b);
			break;
		case 's':
			printf("%.2lf - %.2lf = %.2lf\n",a,b,a-b);
			break;
		case 'm':
			printf("%.2lf * %.2lf = %.2lf\n",a,b,a*b);
			break;
		case 'd':
			printf("%.2lf / %.2lf = %.2lf\n",a,b,a/b);
			break;
		default:
			break;
	}

	return ;
}
void getchar_first(void)
{
	char ch;

	while((ch = getchar()) != '\n');
	return ;
}
