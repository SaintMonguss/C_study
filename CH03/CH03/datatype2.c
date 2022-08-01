#include <stdio.h>

int main()
{
	int x = 100, y = 30;
	printf("x´Â ¹ºµ¥? \n");
	scanf("%d", &x);
	printf("°Å y´Â ¹ºµ¥? \n");
	scanf("%d", &y);
	printf("%d +  %d = %d \n", x, y, x + y);
	printf("%d -  %d = %d \n", x, y, x - y);
	printf("%d *  %d = %d \n", x, y, x * y);
	printf("%d /  %d = %d \n", x, y, x / y);
	printf("%d %%  %d = %d \n", x, y, x % y);


	return 0;
}