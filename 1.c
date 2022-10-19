 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_sushu(int x)
{
	int j = 0;
	for (j = 2; j < x; j++)
	{
		if (0 == x % j)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if(1 == is_sushu(i))
		printf("%d ", i);
	}
	
	return 0;
}