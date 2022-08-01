#include <stdio.h>
#include <math.h>

//함수 : 어떤 일을 처리하는 논리적인 코드들의 집합

funcA()
{
	printf("funcA() start. \n");
	return;
	printf("funcA() end. \n");
}

funcB(int salary)
{
	printf("funcB() salary %d \n", salary);
}

funcD()
{
	int over_time = 15;
	/*printf("funcD() 수당 : %d \n", over_time * 37000);*/
	return over_time * 37000;
}

float funcE(int salTot, float rate)
{
	return salTot * rate;
}


int main()
{

	int salary = 3500000;
	int sudang;
	float tax;

	printf(" main() start. \n");
	funcA();
	funcB(salary);

	sudang = funcD();
	printf("main() 수당 : %d \n", sudang);

	tax = funcE(salary + sudang, 0.03);
	printf("실수령액 : %f \n", salary + sudang - tax);

	printf("10의 제곱근 : %1f \n", sqrt(10.0));

	printf("main() end.\n");

	return 0;
}

