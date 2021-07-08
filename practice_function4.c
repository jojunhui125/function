#include <stdio.h>

void number(float arr[3])
{
	float max = -1000;
	float min = 1000;
	float num[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
		num[0] = max;
		num[1] = min;
	}
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == max || arr[i] == min)
		{
			arr[i] = 0;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (arr[i]!=0)
		{
			num[2]=arr[i];
		}
	}
	
	num[0] += 1;
	if (num[1] < 0)
	{
		num[1] -= 1;
	}
	else
	{
		num[1] += 1;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%.0f ", num[i]);
	}
}

int main()
{
	float arr[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%f", &arr[i]);
	}
	number(arr);
	return 0;
}
