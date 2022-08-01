#include <stdio.h>

int main ()
{
    int x = 70, y = 150;

    printf("%d \n", x > y);
    printf("%d \n", x < y);
    printf("%d \n", x == y);
    printf("%d \n", x != y);

    printf("%d \n", x >= 100 && y >= 100);
    printf("%d \n", x >= 100 || y >= 100);

    return 0;
}