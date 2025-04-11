#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0, j = 0;
		while(argv[1][i])
			i++;
		i--;
		while(i > -1 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;
		j = i;
		while(j > -1 && argv[1][j] != ' ' && argv[1][j] != '\t')
			j--;
		j++;
		while(j <= i)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}