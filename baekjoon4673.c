#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS 


int self_number(int a)
{
	int sum = a;
	while (a != 0)
	{
		sum += a % 10;
		a = a / 10;
	}
	return sum;
}
int main()
{
	int arr[10001] = { 0 };
	int num;
	for (int i = 1; i < 10001; i++)
	{
		num = self_number(i);
		if (num < 10001)
		{
			arr[num] = 1;
		}
	}
	for (int i = 1; i < 10001; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
