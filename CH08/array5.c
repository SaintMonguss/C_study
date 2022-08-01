#include <stdio.h>

int main()
{
	int num[3][4] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12} };

	printf("%d, %d \n", sizeof(num), sizeof(num[0][0]));
	printf("%p, %p, %p \n", num[0], &num[1], num[2]);
	printf("%d, %p, %p \n", num[0][0], &num[0][0], num);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%p: %3d,   ", &num[i][j], num[i][j]);
		printf("\n");
	}

	return 0;
}