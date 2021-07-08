#include <stdio.h>


void number(int a)
{
	int arr[15] = { 0 };
	int swap;
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < a; i++)
	{
		for(int j=i+1;j<a;j++)
		{
			if (arr[i] < arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		printf("%d ", arr[i]);
	}

}

int main()
{
	int a;
	scanf("%d", &a);
	number(a);
	return 0;
}
