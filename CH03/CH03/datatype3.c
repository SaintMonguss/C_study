#include <stdio.h>

int main()
{
	short int n1;
	int n2;
	long int n3;
	long long int n4;
	printf("%d, %d, %d, %d \n", sizeof n1, sizeof(n2), sizeof(n3), sizeof(n4));

	float f1 = 123456789123456789;
	double d1 = 123456789123456789;
	return 0;
}