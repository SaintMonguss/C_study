#include <stdio.h>

swap(int *x, int *y);

int main()
{
	int x = 100, y = 200;

	printf("x : %d, y : %d \n", x, y);
	swap(&x, &y);
	printf("after x : %d , y: %d \n", x, y);

	return 0;
}

	swap(int *x, int *y)
{
		int tmp;

		tmp = *x;
		*x = *y;
		*y = tmp;
}