#include <stdio.h>

double matrix[3][3];
int matrix2[2][2], m, sub, mult[2][2];

int squarem(void)
{
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("Enter matrix2[%d][%d]:", i, j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	 for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                mult[i][j] += matrix2[i][k] * matrix2[k][j];
            }
        }
    }
	for(int i = 0; i < 2; i++)
	{
		printf("\n");
		
		for(int j = 0; j < 2; j++)
		{
			printf(".%d.",matrix2[i][j]);
		}

	}
	for(int i = 0; i < 2; i++)
	{
		printf("\n");
		
		for(int j = 0; j < 2; j++)
		{
			printf(".%d.",mult[i][j]);
		}

	}

}
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
	for(int i = 0; i < 3; i++)
	{
		printf("\n");
		
		for(int j = 0; j < 3; j++)
		{
			printf(".%lf.",matrix[i][j]);
		}

	}
	printf("\nmain = %d\nsub = %d\n", m, sub);
	squarem();
}
