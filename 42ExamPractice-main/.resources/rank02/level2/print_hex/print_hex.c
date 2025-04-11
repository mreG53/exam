#include <unistd.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sig = 1;
	int num = 0;

	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sig);
}

void	puthex(unsigned int n)
{
	char	c;

	if (n >= 16)
		puthex(n / 16);
	c = "0123456789abcdef"[n % 16];
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	unsigned int	num;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		puthex(num);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
	return (0);
}