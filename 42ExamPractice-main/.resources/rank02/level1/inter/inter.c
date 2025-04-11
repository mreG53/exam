#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0, j, k, hw, hf;
	if (argc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			hw = 0;
			hf = 0;
			while(j < i)
			{
				if (argv[1][i] == argv[1][j] && hf == 0)
				{
					hw = 1;
					hf = 1;
				}
				j++;
			}
			if(hw == 0)
			{
				hf = 0;
				k = 0;
				while(argv[2][k])
				{
					if(argv[2][k] == argv[1][i] && hf == 0)
					{
						write(1, &argv[1][i], 1);
						hf = 1;
					}
					k++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}