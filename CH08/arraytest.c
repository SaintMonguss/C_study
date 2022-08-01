#include <stdio.h>

# define ARRYSIZ 10

int main()
{
	int Cn = ARRYSIZ;

	int num[ARRYSIZ + 4] = { 0 };

	for (int i = 0; i < ARRYSIZ; i++)
	{
		printf("%d 번째 값 (입력 종료 : 0) \n", i+1);
		scanf("%d", &num[i]);
		if (num[i] == 0)
		{
			Cn = i;
			break;
		}
	}

	for (int i = 0; i < Cn ; i++)
	{
		printf("%p : %d , %p \n", &num[i], num[i], num);
	}

	for (int i = 0; i < Cn; i++)
		num[ARRYSIZ ] += num[i];
	num[ARRYSIZ+1] = num[ARRYSIZ ] / Cn;

	num[ARRYSIZ +2] = num[ARRYSIZ+3] = num[0];
	for (int i = 0; i < Cn; i++)
	{
		if (num[ARRYSIZ+2] < num[i])
			num[ARRYSIZ+2] = num[i];
		if (num[ARRYSIZ+3] > num[i])
			num[ARRYSIZ+3] = num[i];
	}

	printf("합계 : %d \n평균 : %.d\n최대값 : %d\n최소값 : %d\n", num[ARRYSIZ], num[ARRYSIZ+1], num[ARRYSIZ+2], num[ARRYSIZ+3]);

	return 0;
}