#include <stdio.h>

#define ARR_SZ 5

int main()
{
	int i;
	int a1[5];
	int a2[ARR_SZ];
	int n = 5;
	//int a3[n];
	const int m = 5;
	//int a4[m];

	int x1[5] = { 1, 2, 3, 4, 5 };
	int x2[5];

	//x2 = x1; 배열은 한번에 복사 불가능

	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i];
		printf("%d  ", x2[i]);
	}
	return 0;
}