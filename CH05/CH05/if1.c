#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;

	printf("�� �����̰�!");
	scanf("%d", &score);

	if (score > 100 || score < 0)
	{
		printf(" ���� ������ 100������ 0�� ������ \n");
		exit(1);
	}
	if (score >= 90)
		printf("%d, A���� \n", score);
	else if (score >= 80)
		printf("%d, B���� \n", score);
	else if (score >= 70)
		printf("%d, C���� \n", score);
	else if (score >= 60)
		printf("%d, D���� \n", score);
	else
		printf("%d, F���� \n", score);

	return 0;
}