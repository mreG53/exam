int	ft_atoi_base(const char *str, int str_base)
{
	int sign = 1, res = 0, d;

	if(!str || str_base < 2 || str_base > 16)
		return (0);
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	while(*str)
	{
		if (*str >= '0' && *str <= '9')
			d = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			d = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			d = *str - 'A' + 10;
		else
			break;
		if (d >= str_base)
			break;
		res = res * str_base + d;
		str++;
	}
	return (res * sign);
}