#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 

int sum = 0;

int print(int a)
{
	sum += a;
	if (a <=0)
	{
		printf("%d", sum);
		return ;
	}
	

	return print(a - 1);

}

int main()
{
	int a;
	scanf("%d", &a);
	print(a);
	
	
	return 0;
}
