#include <unistd.h>

int	main(int argc, char **argv)
{
	char c = 0;
	int i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] == '_')
			 {
				i++;
				c = argv[1][i] + 32;
			 }
			 write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}