#include <stdio.h>

int main()
{
	int x = 100, y = 30;
	printf("x�� ����? \n");
	scanf("%d", &x);
	printf("�� y�� ����? \n");
	scanf("%d", &y);
	printf("%d +  %d = %d \n", x, y, x + y);
	printf("%d -  %d = %d \n", x, y, x - y);
	printf("%d *  %d = %d \n", x, y, x * y);
	printf("%d /  %d = %d \n", x, y, x / y);
	printf("%d %%  %d = %d \n", x, y, x % y);


	return 0;
}