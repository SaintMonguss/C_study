#include <stdio.h>
#define PI 3.14

double areafomula(int rad);
double roundfomula(int rad);

int main()
{
	int rad = 0;
	double area = 0;
	double round = 0;

	printf("���� �������� �Է����ּ��� \n");
	scanf("%d", &rad);

	printf("�������� %d �� ���� ���̴� %.2f �̰�, �ѷ��� %.2f �Դϴ�! \n", rad, areafomula(rad), roundfomula(rad));

	return 0;
}

double areafomula(int rad)
{
	return (rad * rad * PI);
}

double roundfomula(int rad)
{
	return (rad * 2* PI);
}