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

	EMP emps = { "홍길동", 3500000, 175, "서울시 강남구 99" };
	EMP tmp;

	printf("%d, %d \n\n", sizeof(emps), sizeof(EMP)); 
	
	printf("%s, %d, %.2f, %s \n\n", emps.name, emps.salary, emps.height, emps.comAddr);

	//printf("이름, 월급 그리고 키를 입력하세요\n");
	//scanf("%s %d %f%*c", &emps.name, &emps.salary, &emps.height);
	//printf("택배를 받을 곳을 쓰세요\n");
	//gets(emps.comAddr);

	printf("%s, %d, %.2f, %s \n\n", emps.name, emps.salary, emps.height, emps.comAddr);

	tmp = emps;
	printf("%s, %d, %.2f, %s \n\n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	return 0;
}