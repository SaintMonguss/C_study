#include <stdio.h>
#define EQ "______________"
#define MSG "������ C ����"
#define SUM(x,y) x+y
int funcb()
{
    printf("C ����� �ڷ���(DataType) \n");
    char ch;
    int age = 10; // ������ �ʱ�ȭ
    double height = 175.1;
    const float pi =3.141592; // ���ȭ ������ �ݵ�� �ʱ�ȭ �ʿ�

    ch = 'A';

    printf("%c, %d, %lf, %f \n", ch, age, height, pi);

    age = 27;
    printf("%c, %d, %lf, %f \n", ch, age, height, pi);

    printf("%d, %d ,%d \n", sizeof(char), sizeof(int), sizeof age);


    return 0;
}