int	ft_atoi(const char *str)
{
	int i = 0;
	int nbr = 0;
	int sig = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sig = -1;
		}
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i++] - '0');
	}
	return (nbr * sig);
}