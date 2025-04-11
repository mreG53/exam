#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int sig = 1;
	int nbr = 0;

	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		sig = -1;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sig);

	
}

int		is_prime(int n)
{
	if (n == 0 || n == 1)
		return (0);
	int i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return (0);
		++i;
	}
	return(1);
}

int	add_prime_sum(int n)
{
	int i = 2;
	int sum = 0;

	while(i <= n)
	{
		if(is_prime(i) == 1)
			sum += i;
		++i;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	int nbr;
	if(argc == 2 && (nbr = ft_atoi(argv[1])))
	{
		ft_putnbr(add_prime_sum(nbr));
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return 0;
}
