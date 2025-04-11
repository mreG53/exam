char *ft_strrev(char *str)
{
	int i = 0;
	int l = 0;
	char temp;
	while(str[l])
		l++;
	while(i < l / 2)
	{
		temp = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = temp;
		i++;
	}
	return (str);
}