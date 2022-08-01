#include <stdio.h>
#define PI 3.14

double areafomula(int rad);
double roundfomula(int rad);

int main()
{
	int rad = 0;
	double area = 0;
	double round = 0;

	printf("원의 반지름을 입력해주세요 \n");
	scanf("%d", &rad);

	printf("반지름이 %d 인 원의 넓이는 %.2f 이고, 둘레는 %.2f 입니다! \n", rad, areafomula(rad), roundfomula(rad));

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