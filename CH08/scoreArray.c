#include <stdio.h>

int main()
{

	int score[5][7] = { {56,90,40,64}, {66,53,48,84}, {42,94,40,80}, {57,45,70,71}, {92,90,60,75} };
	char stdName[5][20] = { "몽구스", "야도란", "포도가", "보고싶", "구우나" };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			score[i][4] += score[i][j];
		}
		score[i][5] = score[i][4] / 4;
		score[i][6] = 1;
	}

	for(int i = 0 ; i < 5 ; i ++)
		for (int j = 0; j < 5; j++)
		{
			if (score[i][4] < score[j][4])
				score[i][6]++;
		}

	heading();
	for (int i = 0; i < 5; i++)
	{
		printf("%4s", stdName[i]);
		for (int j = 0; j < 7; j++)
			printf("%6d", score[i][j]);
		printf("\n");
	}


	return 0;
}


heading()
{
	printf("==================================================\n");
	printf("성명     국어  영어  수학  과학  총점  평균  석차\n");
	printf("==================================================\n");
}