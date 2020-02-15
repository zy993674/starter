#include<stdio.h>
int main()
{
	double r, p = 3.1415926536;
	scanf("%lf", &r);
	printf("圆面积；%.2lf\n球表面积；%.2lf\n球体积；%.2lf\n", p*r*r, 4*p*r*r, 4/3*p*r*r*r);
	return 0;
}
