#include<stdio.h>
#include<ctype.h>

int is_letter(char ch);		//a function to determine whether a character is a letter or not

int main(void)
{
	char ch;
	int num_letters,num_words;
	int num1;
	double average;
	int is_word;		//a constant to recond a word  1 refers to true,0 refers to false

	is_word = 0;
	num_words = num_letters = 0;

	while((ch = getchar()) != EOF)
	{
		if(is_letter(ch)){					//if the first character is a letter
			num1 = 1;
			while((ch = getchar()) != EOF)
			{
				if(is_letter(ch))			//caculate the number of letters
					num1++;
				else if((ch == ' ') || (ch == EOF))		//determine the end of a word
				{
					is_word = 1;
					break;
				}
				else							//isn't the end of word,continue untill the blank
				{
					while((ch = getchar()) != EOF)
					{
						if(ch == ' ')
							break;
					}
				}
			}
			if(is_word)
			{
				num_words++;
				num_letters = num_letters + num1;
				is_word = 0;
			}
		}
	}

	average = num_letters / num_words;

	printf("the number of words is %d\n",num_words );
	printf("the number of letters in words is %d\n",num_letters);
	printf("the average number of letters in words are %d",average);

	return 0;
}

int is_letter(char ch)
{
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return 1;
	else
		return 0;
}
