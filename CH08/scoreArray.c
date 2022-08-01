#include <stdio.h>

int main()
{

	char name[3][20];
	for (int i = 0; i < 3; i++)
	{
		printf("이름 머임? ");
		gets(name[i]);
		printf("name : %s \n\n", name[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("name : %s  \n", name[i]);
	}




	return 0;
}