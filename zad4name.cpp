#include <stdio.h>
#include <math.h>

int main(void)
{
	double S, p, a, b, c, P;
	
	printf("Enter a:", a);
	scanf("%lf",&a);
	
	printf("Enter b:", b);
	scanf("%lf",&b);
	
	printf("Enter c:", c);
	scanf("%lf",&c);
	
	if ((a+b)>c and (a+c)>b and (b+c)>a)
	{
		P = a + b + c;
		p = P / 2;
		S = pow((p * (p-a) * (p-b) * (p-c)), 0.5);
		printf("S = %lf\nP = %lf", S, P);
	} 
	else
	{
		printf("cant proceed");
	}
}

