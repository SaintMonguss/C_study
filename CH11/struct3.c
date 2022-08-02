#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EMP_SZ 10




typedef struct EMPLOYEE 
{
	char name[20];
	int salary;
	float height;
	char comAddr[100];
} EMP;

void emp_input(EMP* ptr);
void emp_output(EMP* ptr);
void emp_find();


int main()
{
	EMP emps[EMP_SZ];
	/*EMP *ptr;
	ptr = emps;*/
	int count = 0;
	int choice = 0;

	while (choice != 4)
	{
		printf("1.  사원정보 입력 \n");
		printf("2.  사원정보 출력 \n");
		printf("3.  사원정보 검색 \n");
		printf("4.  프로그램 종료 \n");
		printf("Select ? \n");
		scanf("%d", &choice);



		switch (choice)
		{
		case 1:
			if (count < 10)
			{
				emp_input(&emps[count]);
				count++;
			}
			else printf("꽉 참 \n");
			break;
		case 2: 
			for(int i =0 ; i < count ; i ++)
				emp_output(&emps[i]);
			break;
		case 3: emp_find();
			break;
		case 4:
			break;
		}
	}
		printf("End\n");


	return 0;
}

void emp_input(EMP *ptr)
{
	printf("성명을 입력해 주세요 \n");
	scanf("%s", ptr->name);
	printf("수당을 입력해 주세요 \n");
	scanf("%d", &(ptr->salary));
	printf("키를 입력해 주세요 \n");
	scanf("%f%*c", &(ptr->height));
	printf("주소를 입력해 주세요 \n");
	gets(ptr->comAddr);
}

void emp_output(EMP *ptr)
{
	printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
}

void emp_find()
{
	printf("검색 함수 \n");
}