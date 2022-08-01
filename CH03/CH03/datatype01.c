#include <stdio.h>
#define EQ "______________"
#define MSG "오스템 C 교육"
#define SUM(x,y) x+y
int funcb()
{
    printf("C 언어의 자료형(DataType) \n");
    char ch;
    int age = 10; // 데이터 초기화
    double height = 175.1;
    const float pi =3.141592; // 상수화 변수는 반드시 초기화 필요

    ch = 'A';

    printf("%c, %d, %lf, %f \n", ch, age, height, pi);

    age = 27;
    printf("%c, %d, %lf, %f \n", ch, age, height, pi);

    printf("%d, %d ,%d \n", sizeof(char), sizeof(int), sizeof age);


    return 0;
}