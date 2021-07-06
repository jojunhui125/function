#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS 


void number(int ch)
{

	if (ch < 100)
	{
		printf("%d", ch);
	}

	else
	{
		int cnt = 99;
		int A, B, C;

		for (int i = 100; i <= ch; i++)
		{
			A = i / 100;
			B = (i / 10) % 10;
			C = (i % 10);

			if ((A - B) == (B - C))
			{
				cnt++;
			}
		}
		printf("%d", cnt);
		
	}
	
}
int main()
{
	int n;
	scanf("%d", &n);

	number(n);
	
	
	return 0;
}
