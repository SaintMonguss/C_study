#include <stdio.h>
#include <math.h>

//�Լ� : � ���� ó���ϴ� ������ �ڵ���� ����

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
	/*printf("funcD() ���� : %d \n", over_time * 37000);*/
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
	printf("main() ���� : %d \n", sudang);

	tax = funcE(salary + sudang, 0.03);
	printf("�Ǽ��ɾ� : %f \n", salary + sudang - tax);

	printf("10�� ������ : %1f \n", sqrt(10.0));

	printf("main() end.\n");

	return 0;
}

