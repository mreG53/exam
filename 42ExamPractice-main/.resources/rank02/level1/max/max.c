int	max(int *tab, unsigned int len)
{
	int max = tab[0];
	unsigned int i = 0;
	while(i < len)
	{
		if(max < tab[i])
			max = tab[i];
	}
	return (max);
}