#include <stdio.h>

funcA(int age);
funcB(int age);

int salary = 3500000;

int main()
{
	int age = 29;

	printf("main() age : %d, %p salary: %d, %p \n", age, &age, salary, &salary);
	funcA(age);
	printf("main() age : %d, %p salary: %d, %p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age : %d, %p salary: %d, %p \n", age, &age, salary, &salary);

	funcD();
	funcD();
	funcD();

	return 0;
}

funcA(int age)
{
	printf("funcA() age: %d, %p salary: %d, %p \n", age, &age, salary, &salary);
	salary += 200000;
	age = 35;
}

funcB()
{
	int age = 23;
	printf("funcB() age: %d, %p \n", age, &age);
	age = 44;
}

funcD()
{
	int sum1 = 1;
	static int sum2 = 0;

	printf("sum1: %d, sum2 %d\n", sum1++, sum2++);
}