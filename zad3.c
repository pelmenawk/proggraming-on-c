#include <stdio.h>
#include <string.h>

char string[80];
int main(void)
{
	printf("Enter string:", string);
	fgets(string, 80, stdin);
	for(char i = 0; i < 80; i++)
	{
		if(string[i] == 'a') string[i] = 'A';
		if(string[i] == 'b') string[i] = 'B';
	}
	printf("%s", string);
}

