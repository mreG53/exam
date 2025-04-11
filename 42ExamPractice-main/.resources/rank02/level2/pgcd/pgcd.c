#include <stdio.h>
#include <stdlib.h>

int	gcd(int a, int b)
{
	while (b)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return (a);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", gcd(atoi(argv[1]), atoi(argv[2])));
		return (0);
	}
	printf("\n");
	return (0);
}