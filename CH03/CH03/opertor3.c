#include <stdio.h>

int main ()
{
    int x;
    printf("성별 ? 남:0 | 여 : 1");
    scanf("%d", &x);

    printf("%s \n", x == 0 ? "남자" : "여자");

    return 0;
}