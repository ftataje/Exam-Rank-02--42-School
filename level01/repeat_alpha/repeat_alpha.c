#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int m;
	i = 0;
	m = 0;

	if(argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				m = argv[1][i] - 96;
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				m = argv[1][i] - 64;
			}
			else
				m = 1;
			while(m > 0)
			{
				write(1, &argv[1][i], 1);
				m--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

