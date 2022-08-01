#include <stdio.h> // 표준 입출력 헤더
// 전처리문은 ; 사용 금지


int main()
{
	printf("main() Start! \n");
	funcb();
	printf("main() end \n");
	return 0;
}

funcA()
{
	printf("funcA() Start. \n");
	printf("funcA() End. \n");
}
