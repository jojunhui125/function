#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS 


void print(int n)
{
	int arr[1000] = { 0 };
	arr[0] = n;
	
	for (int i = 0; i < n; i++)
	{
		arr[i + 1] = arr[i] / 2;
		if (arr[i + 1] == 0)
		{
			break;
		}
	}
	for (int i = n; i >= 0; i--)
	{
		if (arr[i] > 0)
		{
			printf("%d ", arr[i]);
		}
		
	}
}



int main(void)
{
	int n;
	scanf("%d", &n);
	print(n);
}
