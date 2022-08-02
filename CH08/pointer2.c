#include <stdio.h>

int main()
{
	char ch, * cp;
	int num, * ip;
	float fnum, * fp;
	double dnum, * dp;

	printf(" %d, %d, %d, %d \n", sizeof(ch), sizeof(num), sizeof(fnum), sizeof(dp));
	printf(" %d, %d, %d, %d \n", sizeof(cp), sizeof(ip), sizeof(fp), sizeof(dp));

	cp = &ch;
	ip = &num;
	fp = &fnum;
	dp = &dnum;

	*cp = 'A';
	*ip = 100;
	*fp = 1.1;
	*dp = 5.3;

	printf(" %c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf(" %p, %p, %p, %p \n\n", &cp, &ip, &fp, &dp);

	ch++, num++, fnum++, dnum++;
	cp++, ip++, dp++, fp++;

	printf(" %c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf(" %p, %p, %p, %p \n\n", &cp, &ip, &fp, &dp);


	return 0;
}