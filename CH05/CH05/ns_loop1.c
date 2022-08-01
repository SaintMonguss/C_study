#include <stdio.h>

int main()
{
	char ch;
	char in_char;

	printf("input char  ? ");
	in_char = getchar();

	for (int i = 0; i < 3; i++)
	{
		ch = 'A';
		while (ch <= 90)
		{
			printf("%c ", ch);
			if (ch == in_char)
				break;
			ch++;
		}
		printf("\n");
	}
	printf("END\n");

	return 0;
}