#include <stdio.h>

int main()
{
	char ch = 'a';
	char str[10] = "king dom";

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));
	printf("%c, %p, %p \n\n", ch, &str[0], str);

	printf(" %p, %s \n\n", str, str+4);


	printf("input string ?? \n");
	//scanf("%s", str);
	gets(str);
	printf(" %p, %s \n\n", str, str);

	for (int i = 0; i < 10; i++)
	{
		printf("%p, %c, %d \n", &str[i], str[i], str[i]);
	}

	return 0;
}