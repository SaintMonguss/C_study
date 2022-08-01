 #include <stdio.h>

int main(void)
{
	char ch;
	short int num1;
	int num2;
	long int num3; 
	float f_num;
	double d_num;

    printf("input char ? ");
	scanf(" %c", &ch); // %c 앞에 공백, 공백 지정자 = 한문자 받기 전에 공백검사.

	printf("input short int ? ");
	scanf("%hd", &num1);

	printf("input  int ? ");
	scanf("%d", &num2);

	printf("input long  int ? ");
	scanf("%ld", &num3);
	
    printf("input float ? ");
	scanf("%f", &f_num);

    printf("input double ? ");
	scanf("%lf", &d_num);

	printf("ch: %c, num1 : %hd, num2 : %d, num3: %ld, f_num : %f , d_num : %lf \n",
		                       ch, num1, num2, num3, f_num, d_num );

	return 0 ;
}