#include <stdio.h>
#include <string.h>

int main()
{
	typedef struct EMPLOYEE 
	{
		char name[20];
		int salary;
		float height;
		char comAddr[100];
	} EMP ;

	EMP emps = { "ȫ�浿", 3500000, 175, "����� ������ 99" };
	EMP tmp;

	printf("%d, %d \n\n", sizeof(emps), sizeof(EMP)); 
	
	printf("%s, %d, %.2f, %s \n\n", emps.name, emps.salary, emps.height, emps.comAddr);

	//printf("�̸�, ���� �׸��� Ű�� �Է��ϼ���\n");
	//scanf("%s %d %f%*c", &emps.name, &emps.salary, &emps.height);
	//printf("�ù踦 ���� ���� ������\n");
	//gets(emps.comAddr);

	printf("%s, %d, %.2f, %s \n\n", emps.name, emps.salary, emps.height, emps.comAddr);

	tmp = emps;
	printf("%s, %d, %.2f, %s \n\n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	return 0;
}