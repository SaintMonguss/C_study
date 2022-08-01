#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;

	printf("마 몇점이고!");
	scanf("%d", &score);

	if (score > 100 || score < 0)
	{
		printf(" 시험 점수는 100점에서 0점 사이임 \n");
		exit(1);
	}
	if (score >= 90)
		printf("%d, A학점 \n", score);
	else if (score >= 80)
		printf("%d, B학점 \n", score);
	else if (score >= 70)
		printf("%d, C학점 \n", score);
	else if (score >= 60)
		printf("%d, D학점 \n", score);
	else
		printf("%d, F학점 \n", score);

	return 0;
}