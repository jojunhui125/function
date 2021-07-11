#include <stdio.h>


int sum = 0;

int print(int n)
{
	if (n/10==0)
	{
			return n*n;
	}
	sum = (n % 10);

	return sum*sum + print(n / 10);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", print(n));
}
