#include <stdio.h>

void swap(int input[10],int n)
{
	int temp, max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (input[i] < input[j])
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", input[i]);
	}
}
int main()
{
	int arr[10] = { 0 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	swap(arr,n);
	
	return 0;
}
