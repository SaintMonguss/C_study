#include <stdio.h>

int main()
{
	int sum = 0;
	int max, min;
	float avg;

	int num[5] = { 300, 20, 75, -40, 130 };

	printf("%d,%d \n", sizeof(num), sizeof(num[0]));

	printf("%d, %p \n", num[0], &num[0]);

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ��° �� \n", i+1);
	//	scanf("%d", &num[i]);
	//}

	for (int i = 0; i < 5; i++)
	{
		printf("%p : %d , %p \n", &num[i], num[i], num);
	}

	for (int i = 0; i < 5; i++)
		sum += num[i];
	avg = (float)sum / 5;

	max = min = num[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
	}

	printf("�հ� : %d \n��� : %.2f\n�ִ밪 : %d\n�ּҰ� : %d\n", sum, avg, max, min);
	
	return 0;
}