#include <stdio.h>


void check(int arr[7])
{
	int swap=0;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	

}

int main()
{
	int arr[7] = { 0 };
	check(arr);
	
	return 0;
}
