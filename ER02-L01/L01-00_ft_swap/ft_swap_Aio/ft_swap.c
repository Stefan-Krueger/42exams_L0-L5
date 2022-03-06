#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main(void)
{
	int a = 3;
	int b = 1;

	printf("a = % i, b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("a = % i, b = %i\n", a, b);
	return(0);
}
