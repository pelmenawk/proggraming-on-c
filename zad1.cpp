#include <stdio.h>
#include <math.h>

int main(void)
{
	double D, x1, x2;
	int a, b, c;
	do
	{
	
	printf("enter a:");
	scanf("%i", &a);
	
	printf("enter b:");
	scanf("%i", &b);
	
	printf("enter c:");
	scanf("%i", &c);
	
	D = pow(b,2.) - 4*a*c;
	if (D > 0)
	{
		printf("%f\n", D);
	
		x1 = (-b + pow(D, 0.5)) / 2*a;
		printf("%f\n", x1);
	
		x2 = (-b - pow(D, 0.5)) / 2*a;
		printf("%f\n", x2);
	}
	else if (D == 0)
	{
		x1 = -b / 2 * a;
	}
	else if (D < 0)
	{
		printf("negative D, cant proceed");
	}
	}
	while (D >=0);
}
