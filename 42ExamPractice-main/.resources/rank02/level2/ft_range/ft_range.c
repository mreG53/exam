#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int size = (start <= end ? end - start : start - end) + 1;
	int *arr = malloc(sizeof(int) * size);
	int i = 0, step = (start <= end ? 1 : -1);

	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i++] = start;
		start += step;
	}
	return (arr);
}