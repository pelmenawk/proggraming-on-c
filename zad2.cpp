#include <stdio.h>

double matrix[3][3];
int matrix2[2][2], m, sub, mult1, mult2, mult3, mult4;

int main(void)
{
	for(int i = 0; i < 3; i++)
		{
		for(int j = 0; j < 3; j++)
			{
			printf("Enter matrix[%d][%d]:", i, j);
			scanf("%lf",&matrix[i][j]);
			}
		}
	m = matrix[0][0] + matrix [1][1] + matrix[2][2];
	sub = matrix[0][2] + matrix [1][1] + matrix [2][0];
	printf("main = %d\nsub = %d", m, sub);
}
int main2(void)
{
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("Enter matrix2[%d][%d]:", i, j);
			scanf("%lf",&matrix2[i][j]);
		}
	}
	mult1 = matrix2[0][0] * matrix2[0][0] + matrix[0][1] * matrix[1][0]
	mult2 = matrix2[0][1] * matrix2[0][0] + matrix[0][1] * matrix[1][0]
	mult3 = matrix2[0][0] * matrix2[0][0] + matrix[0][1] * matrix[1][0]
	mult4 = matrix2[0][0] * matrix2[0][0] + matrix[0][1] * matrix[1][0]


	
}
