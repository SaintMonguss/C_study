#include <stdio.h>

int deposit(int balance);
int whitdraw(int balance);
balanceOutput(int balance);

int main()
{
	int balance = 0;
    int choice;

    while(1)
	{
		printf("\n1) �Ա� \n");
		printf("2) ��� \n");
		printf("3) �ܰ���ȸ \n");
		printf("4) ���� \n");

	   do{
		  printf("   �����ϼ��� ?(1~4) ");
		  scanf("%d", &choice);
	   }while(choice<1 || choice>4);

		switch(choice)
		{
            case 1 : balance = deposit(balance);
						break;
            case 2 : balance = whitdraw(balance);
						break;
            case 3 : balanceOutput(balance);
						break;
			case 4 : puts("���α׷��� �����մϴ� ");
						exit(0);
		}
   }

	return 0;
}

int deposit(int balance)
{
   int money;

	printf("\n�Ա��� �ݾ��� ? ");
	scanf("%d", &money);

	balance += money;
	return balance;
}

int whitdraw(int balance)
{
   int money;

	printf("\n����� �ݾ��� ? ");
	scanf("%d", &money);

	if (balance < money)
	{
		printf(" �ܰ� ����!!!, ���� �ܰ� : %d\n", balance);
		return balance;
	}

	balance -= money;
	return balance;
}

balanceOutput(int balance)
{
   printf("���� �ܰ�� : %d �Դϴ�. \n", balance);
}
