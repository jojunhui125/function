#include <stdio.h>

void odd(int a,int n)
{

	if (a > n)
	{
		return 0;
	}
	printf("%d ", a);
	a = a + 2;
	
	return odd(a,n);
}
void even(int b,int n)
{

	if (b > n)
	{
		return;
	}
	printf("%d ", b);
	b += 2;

	return even(b, n);
}



int main(void)
{
	int n;
	scanf("%d", &n);
	int a = 1;
	int b = 2;
	if (n % 2 == 0)
	{
		even(b,n);
	}
	else
	{
		odd(a,n);
	}
	
}
