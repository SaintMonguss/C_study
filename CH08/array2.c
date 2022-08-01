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

	int x3[5] = { 100, 200 };
	for (i = 0; i < 5; i++)
		printf("%d  ", x3[i]);// 배열을 초기화 할때 지정하지 않은 원소는 0값을 보장

	int x4[] = { 100, 200, 300, 400, 500 }; // 배열이 선언과 동시에 초기화 될 때 크기를 명시하지 않아도 원소의 수와 같은 크기로 지정해 줌
	printf("x4 sizeof : %d \n", sizeof(x4));

	return 0;
}