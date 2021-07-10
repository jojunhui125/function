#include <stdio.h>
int print(int n)
{
	if (n == 1)
	{
			return 1;
	}

	return print(n - 1) + print(n / 2);
}



int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", print(n));
}
