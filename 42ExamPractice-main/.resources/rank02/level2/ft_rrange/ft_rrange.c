#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int size = (size <= end ? end - start : start - end) + 1;
	int *arr = malloc(size * sizeof(int));
	int i = 0;
	int step = (end > start ? -1 : 1);

	if(!arr)
		return (0);
		while (i < size)
		{
			arr[i++] = end;
			end += step;
		}
		return (arr);
}