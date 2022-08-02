#include <stdio.h>

int main()
{
	char msg[30] = "Hello World !!!";

	printf("before msg : %s \n", msg);
	ConvertString(msg);
	printf("after msg : %s \n" , msg);

	return 0;
}

ConvertString(char *ptr)
{
	while (*ptr != NULL)
	{
		if (65 <= *ptr && *ptr <= 90)
		{
			*ptr += 32;
			ptr++;
			continue;
		}
		if (97 <= *ptr && *ptr <= 122)
		{
			*ptr -= 32;
		}
		ptr++;
	}
}