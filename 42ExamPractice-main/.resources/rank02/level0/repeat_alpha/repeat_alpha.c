#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int c = 1;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			c = 1;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				c = argv[1][i] - 96;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				c = argv[1][i] - 64;
			while(c >= 1)
			{
				write(1, &argv[1][i], 1);
				c--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}