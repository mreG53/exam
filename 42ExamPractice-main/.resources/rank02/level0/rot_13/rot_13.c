#include <unistd.h>

int main(int argc, char **argv)
{
	char c;
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			if((argv[1][i] >= 'A' && argv[1][i] <= 'M') || 
			((argv[1][i] >= 'a' && argv[1][i] <= 'm')))
				c = argv[1][i] + 13;
			else if((argv[1][i] >= 'N' && argv[1][i] <= 'Z') || 
				((argv[1][i] >= 'n' && argv[1][i] <= 'z')))
				c = argv[1][i] - 13;
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}