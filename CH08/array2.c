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

	//x2 = x1; �迭�� �ѹ��� ���� �Ұ���

	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i];
		printf("%d  ", x2[i]);
	}

	int x3[5] = { 100, 200 };
	for (i = 0; i < 5; i++)
		printf("%d  ", x3[i]);// �迭�� �ʱ�ȭ �Ҷ� �������� ���� ���Ҵ� 0���� ����

	int x4[] = { 100, 200, 300, 400, 500 }; // �迭�� ����� ���ÿ� �ʱ�ȭ �� �� ũ�⸦ ������� �ʾƵ� ������ ���� ���� ũ��� ������ ��
	printf("x4 sizeof : %d \n", sizeof(x4));

	return 0;
}